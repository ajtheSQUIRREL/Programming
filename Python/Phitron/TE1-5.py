f = open("Student Informations.txt", "w")
print("How Many Students : ", end=" ")
x = int(input())

for i in range(0, x):
    print(f"Enter Student {i+1} Name : ", end=" ")
    name = input()
    print(f"Enter Student {i+1} Mark : ", end=" ")
    marks = int(input())
    info = f"ID : {i+101} | Name : {name} | Mark : {marks}\n"
    f.write(info)

f.close()
