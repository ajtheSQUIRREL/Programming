def exp(a, n):
    res = a**n
    return res


print("enter numbers: ", end=" ")
x, y = map(int, input().split())
res = exp(x, y)
print(f"result is: {res}")
