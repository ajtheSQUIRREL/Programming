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


pages = []
n = int(input("Enter Number of Pages : "))
for i in range(n):
    pages.append(int(input(f"Enter page number {i} : ")))

frame_size = int(input("Enter Frame Number : "))

sc_algorithm = SecondChance(frame_size)
page_faults = 0

for page in page_references:
    if sc_algorithm.page_fault(page):
        page_faults += 1

print("Second Chance Page Replacement Algorithm:")
print("Page Faults:", page_faults)
