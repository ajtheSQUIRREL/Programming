"""
Input  : x3b4U5i2
Output : bbbbiiUUUUUxxx

"""
print("Enter The String : ", end=" ")
s = input()
dic = {}
ch = []
for k, v in enumerate(s):
    if k % 2 == 0:
        ch.append(s[k])
        dic[s[k].lower()] = s[k + 1]

sorted_dic = sorted(dic.keys())

for c in sorted_dic:
    for k, v in dic.items():
        if k == c:
            for ch2 in ch:
                if c == ch2.lower():
                    print(ch2 * int(v), end="")
