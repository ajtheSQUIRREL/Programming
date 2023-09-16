memory_size = int(input("Enter the size of main memory : "))
page_size = int(input("Enter the page size : "))
process_size = int(input("Enter the process size : "))
sz = int(process_size / page_size)
page_table = [None] * sz

for i in range(len(page_table)):
    page_table[i] = int(input(f"Enter the frame number of instruction for page {i} :"))

while True:
    print("Enter the logical Address to convert into physical address : ", end=" ")
    x = int(input())
    page = int(x / page_size)
    offset = int(x % page_size)
    physical_address = page_table[page] * page_size + offset
    print(f"The physical address is {physical_address}")
    print()
    print("If you want to convert again type Y else type N : ", end=" ")
    rep = input()
    if rep == "Y" or rep == "y":
        pass
    elif rep == "N" or rep == "n":
        break
    else:
        print("Invalid Keyword")
