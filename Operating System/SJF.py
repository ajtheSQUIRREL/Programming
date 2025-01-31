def main():
    n = int(input("Enter number of process: "))
    A = [[0 for j in range(4)] for i in range(100)]
    total, avg_wt, avg_tat = 0, 0, 0
    print("Enter Burst Time:")
    for i in range(n):
        A[i][1] = int(input(f"P{i+1}: "))
        A[i][0] = i + 1
    for i in range(n):
        index = i
        for j in range(i + 1, n):
            if A[j][1] < A[index][1]:
                index = j
        temp = A[i][1]
        A[i][1] = A[index][1]
        A[index][1] = temp
        temp = A[i][0]
        A[i][0] = A[index][0]
        A[index][0] = temp
    A[0][2] = 0
    for i in range(1, n):
        A[i][2] = 0
        for j in range(i):
            A[i][2] += A[j][1]
        total += A[i][2]
    avg_wt = total / n
    total = 0
    print("P	 BT	 WT	 TAT")
    for i in range(n):
        A[i][3] = A[i][1] + A[i][2]
        total += A[i][3]
        print(f"P{A[i][0]}	 {A[i][1]}	 {A[i][2]}	 {A[i][3]}")
    avg_tat = total / n
    print(f"Average Waiting Time= {avg_wt}")
    print(f"Average Turnaround Time= {avg_tat}")


if __name__ == "__main__":
    main()
