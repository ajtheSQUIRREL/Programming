s = "Programming Hero is the best"
reversedS = ""

sList = s.split(" ")

for word in sList:
    chars = reversed(word)
    reversedS += "".join(chars) + " "

print(reversedS)
