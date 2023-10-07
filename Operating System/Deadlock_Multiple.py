from operator import add

process = int(input("Enter Number Of Processes : "))
r = int(input("Enter Number Of Resources : "))
resource = []
print("Enter Existing resources : ")
for i in range(r):
    x = int(input(f"Enter Number Of Resource {i} : "))
    resource.append(x)
assigned = []
requested = []

for i in range(process):
    print(f"Enter how many resources are allocated for process {i} : ")
    li = []
    for j in range(r):
        print(f"     Resource {j} : ", end=" ")
        x = int(input())
        li.append(x)
        resource[j] -= x
    assigned.append(li)

for i in range(process):
    print(f"Enter how many resources are requested for process {i} : ")
    li = []
    for j in range(r):
        print(f"     Resource {j} : ", end=" ")
        x = int(input())
        li.append(x)
    requested.append(li)


done = [0] * process
while True:
    fl = 1

    for i in range(process):
        if done[i] == 0:
            ok = 1
            for k in range(r):
                if resource[k] < requested[i][k]:
                    ok = 0
                    break
            if ok:
                fl = 0
                done[i] = 1
                resource = list(map(add, resource, assigned[i]))
                break
    if fl:
        break
flag = 1
print()
for i in range(len(done)):
    if done[i] == 0:
        print(f"Deadlock Found In Process {i}.")
        flag = 0

if flag:
    print("NO Deadlock Found.")
