def replace_comma_with_space(text):
    newText = ""
    for c in text:
        if c == ",":
            newText += " "
        else:
            newText += c
    return newText


s = "I,have,been,practising,python,since,the,course,started"

output = replace_comma_with_space(s)
print(output)
