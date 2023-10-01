from collections import deque


def fifo_page_replacement(pages, frame_size):
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


pages = []
n = int(input("Enter Number of Pages : "))
for i in range(n):
    pages.append(int(input(f"Enter page number {i} : ")))

frame_size = int(input("Enter Frame Number : "))
print("FIFO Page Replacement:", fifo_page_replacement(pages, frame_size))
