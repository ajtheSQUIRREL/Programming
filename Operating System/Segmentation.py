seg = int(input("Enter Total Number Of Segments : "))
print("Enter Segment Table : ")
seg_table = []
for i in range(seg):
    print(f"Segment {i} : ")
    a = []
    a.append(int(input("     Enter Base Address : ")))
    a.append(int(input("     Enter Limit : ")))
    seg_table.append(a)
    print()
print("Enter The Logical Address : ")
s = int(input("     Enter Segment No. : "))
if 0 <= s <= seg:
    b = int(input("     Enter Byte No. : "))
    if 0 <= b <= seg_table[s][1]:
        print(f"The Physical Address Is : {seg_table[s][0]+b}")
    else:
        print("It's a Trap.")
else:
    print("Invalid Segment.")
