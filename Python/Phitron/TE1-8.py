class pair_finder:
    def eqTarget(self, nums, target):
        L = {}
        for i, num in enumerate(nums):
            if target - num in L:
                return (L[target - num], i)
            L[num] = i


numbers = [10, 20, 10, 40, 50, 60, 70]
target = int(50)
print(pair_finder().eqTarget(numbers, target))
