mm = int(input("Enter The Size Of Main Memory : "))
seg = int(input("Enter Total Number Of Segments : "))
print("Enter Segment Table : ")
seg_table = []
seg_table_check = []
for i in range(seg):
    print(f"Segment {i} : ")
    a = []
    a.append(int(input("     Enter Base Address : ")))
    a.append(int(input("     Enter Limit : ")))
    ck = 0
    for i in enumerate(seg_table):
        if (
            seg_table[0][0] <= a[0] <= seg_table[0][1]
            and seg_table[0][0] <= a[0] + a[1] <= seg_table[0][1]
        ):
            ck = 1
    if ck == 1:
        seg_table_check[i] = True
        seg_table.append(a)
    print()
print("Enter The Logical Address : ")
s = int(input("     Enter Segment No. : "))
if 0 <= s <= seg:
    b = int(input("     Enter Byte No. : "))
    if 0 <= b <= seg_table[s][1]:
        if seg_table_check[s] == True:
            print(f"The Physical Address Is : {seg_table[s][0]+b}")
        else:
            print("Address Not Assigned.")
    else:
        print("It's a Trap.")
else:
    print("Invalid Segment.")
