replace_with = [
    "chief",
    "thief",
    "superintendent",
    "sweeper",
    "married",
    "left",
    "tried",
    "died",
]

s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."


def replace_word(text):
    li = list(text.split(" "))
    for k, v in enumerate(li):
        if v == replace_with[0]:
            li[k] = replace_with[1]
        elif v == replace_with[2]:
            li[k] = replace_with[3]
        elif v == replace_with[4]:
            li[k] = replace_with[5]
        elif v == replace_with[6]:
            li[k] = replace_with[7]
    newText = ""
    for word in li:
        newText += word + " "
    print(newText)


replace_word(s)
