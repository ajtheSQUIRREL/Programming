class ssMaker:
    def SS(self, subSet):
        return self.recursion([], sorted(subSet))

    def recursion(self, curr, subSet):
        if subSet:
            return self.recursion(curr, subSet[1:]) + self.recursion(
                curr + [subSet[0]], subSet[1:]
            )
        return [curr]


li = [4, 5, 6]

print(ssMaker().SS(li))
