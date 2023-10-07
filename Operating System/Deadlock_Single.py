from operator import add

process = int(input("Enter Number Of Processes : "))
resource = int(input("Enter Number Of Resources : "))
assigned = []
requested = []
available = [1] * resource
for i in range(process):
    print(
        f"Enter which resources are allocated for process {i} (1 for allocation and 0 for no allocation): "
    )
    li = []
    for j in range(resource):
        print(f"     Resource {j} : ", end=" ")
        x = int(input())
        li.append(x)
        available[j] = 0
    assigned.append(li)

for i in range(process):
    print(
        f"Enter which resources are requested for process {i} (1 for request and 0 for no request): "
    )
    li = []
    for j in range(resource):
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
            for k in range(resource):
                if available[k] < requested[i][k]:
                    ok = 0
                    break
            if requested[i] <= available:
                fl = 0
                done[i] = 1
                available = list(map(add, available, assigned[i]))
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
