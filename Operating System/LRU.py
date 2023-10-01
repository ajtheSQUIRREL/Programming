from collections import OrderedDict


def lru_page_replacement(pages, frame_size):
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


pages = []
n = int(input("Enter Number of Pages : "))
for i in range(n):
    pages.append(int(input(f"Enter page number {i} : ")))

frame_size = int(input("Enter Frame Number : "))
print("LRU Page Replacement:", lru_page_replacement(pages, frame_size))
