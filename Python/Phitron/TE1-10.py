import math


class Distance:
    def __init__(self, x1, y1, x2, y2):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2

    def dis(self):
        res = math.sqrt(
            math.pow((self.y2 - self.y1), 2) + math.pow((self.x2 - self.x1), 2)
        )
        return res


obj = Distance(1, 3, 5, 6)

distance = obj.dis()

print(distance)
