l = ["This", "is", "very", "fantastic"]


def create_string(strList):
    newStr = ""
    for word in strList:
        newStr += word + " "
    print(newStr)


create_string(l)
