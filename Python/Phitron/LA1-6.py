def clean_string(text):
    output = ""
    for c in text:
        if 90 >= ord(c) >= 65 or 122 >= ord(c) >= 97:
            output += c
    return output


s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"

output = clean_string(s)
print(output)
