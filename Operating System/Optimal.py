def optimal_page_replacement(pages, frame_size):
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
                    frames[replace_index] = pages[i]
                    page_faults += 1

    return page_faults


# Example usage
pages = []
n = int(input("Enter Number of Pages : "))
for i in range(n):
    pages.append(int(input(f"Enter page number {i} : ")))

frame_size = int(input("Enter Frame Number : "))
print("Optimal Page Replacement:", optimal_page_replacement(pages, frame_size))
