from collections import deque, OrderedDict


class Optimal:
    @staticmethod
    def page_fault(pages, frame_size):
        page_faults = 0
        frames = [-1] * frame_size

        for i in range(len(pages)):
            if pages[i] not in frames:
                if -1 in frames:
                    frames[frames.index(-1)] = pages[i]
                else:
                    future_access = [
                        j for j in range(i + 1, len(pages)) if pages[j] in frames
                    ]
                    if future_access:
                        replace_index = frames.index(
                            max(future_access, key=future_access.index)
                        )
                    else:
                        replace_index = 0  # Replace the first frame if no future access
                    frames[replace_index] = pages[i]
                    page_faults += 1

        return page_faults


class FIFO:
    @staticmethod
    def page_fault(pages, frame_size):
        page_faults = 0
        frames = deque(maxlen=frame_size)

        for page in pages:
            if page not in frames:
                if len(frames) < frame_size:
                    frames.append(page)
                else:
                    frames.popleft()
                    frames.append(page)
                page_faults += 1

        return page_faults


class LRU:
    @staticmethod
    def page_fault(pages, frame_size):
        page_faults = 0
        frames = OrderedDict()

        for page in pages:
            if page not in frames:
                if len(frames) < frame_size:
                    frames[page] = None
                else:
                    frames.popitem(last=False)
                    frames[page] = None
                page_faults += 1
            else:
                frames.pop(page)
                frames[page] = None

        return page_faults


class SecondChance:
    def __init__(self, frame_size):
        self.frame_size = frame_size
        self.frames = []
        self.reference_bit = []

    def page_fault(self, page):
        if page not in self.frames:
            if len(self.frames) < self.frame_size:
                self.frames.append(page)
                self.reference_bit.append(False)
            else:
                while True:
                    # Rotate the frames and reference bits
                    victim_page = self.frames.pop(0)
                    was_referenced = self.reference_bit.pop(0)
                    if not was_referenced:
                        break
                    else:
                        self.frames.append(victim_page)
                        self.reference_bit.append(False)

                # Replace the victim page with the new page
                self.frames.append(page)
                self.reference_bit.append(False)

            return True  # Page fault occurred
        else:
            # Page is already in memory, set its reference bit to True
            index = self.frames.index(page)
            self.reference_bit[index] = True
            return False  # No page fault


def main():
    pages = list(
        map(int, input("Enter the page references (space-separated): ").split())
    )
    frame_size = int(input("Enter the number of frames: "))

    # Optimal Page Replacement Algorithm
    optimal = Optimal()
    optimal_faults = optimal.page_fault(pages, frame_size)

    # FIFO Page Replacement Algorithm
    fifo = FIFO()
    fifo_faults = fifo.page_fault(pages, frame_size)

    # LRU Page Replacement Algorithm
    lru = LRU()
    lru_faults = lru.page_fault(pages, frame_size)

    # Second Chance Page Replacement Algorithm
    sc_algorithm = SecondChance(frame_size)
    sc_faults = 0

    for page in pages:
        if sc_algorithm.page_fault(page):
            sc_faults += 1

    print("\nOptimal Page Replacement Algorithm:")
    print("Page Faults:", optimal_faults)

    print("\nFIFO Page Replacement Algorithm:")
    print("Page Faults:", fifo_faults)

    print("\nLRU Page Replacement Algorithm:")
    print("Page Faults:", lru_faults)

    print("\nSecond Chance Page Replacement Algorithm:")
    print("Page Faults:", sc_faults)


if __name__ == "__main__":
    main()
