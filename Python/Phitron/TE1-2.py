print("enter numbers: ", end=" ")
num = map(float, input().split("-"))
sum = 0
for n in num:
    sum += n

print(f"sum is: {sum}")
