a = ["oh", "Emelia", "to"]

s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."


def create_new_string(s):
    li = s.split(" ")
    li2 = []

    for word in li:
        word = word.replace(",", "")
        word = word.replace(".", "")
        li2.append(word)

    word1 = ""
    word2 = ""
    word3 = ""

    for k, v in enumerate(li2):
        if v.lower() == a[0].lower():
            word1 = li2[k + 1]

    for k, v in enumerate(li2):
        if v.lower() == a[1].lower():
            word2 = li2[k + 1]

    for k, v in enumerate(li2):
        if v.lower() == a[2].lower():
            word3 = li2[k + 1]

    text = word1 + " " + word2 + " " + word3

    file = open("out.txt", "w")
    file.write(text)


create_new_string(s)
