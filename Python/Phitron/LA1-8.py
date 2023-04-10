def make_upper(text):
    newText = ""
    for c in text:
        if 122 >= ord(c) >= 97:
            newText += chr(ord(c) - 32)
        else:
            newText += c
    return newText


def make_lower(text):
    newText = ""
    for c in text:
        if 90 >= ord(c) >= 65:
            newText += chr(ord(c) + 32)
        else:
            newText += c
    return newText


def make_capital(text):
    newText = ""
    for k, v in enumerate(text):
        if k == 0 and 122 >= ord(v) >= 97:
            newText += chr(ord(v) - 32)
        elif k != 0 and text[k - 1] == " " and 122 >= ord(v) >= 97:
            newText += chr(ord(v) - 32)
        elif k != 0 and text[k - 1] != " " and 90 >= ord(v) >= 65:
            newText += chr(ord(v) + 32)
        else:
            newText += v
    return newText


def test_script():
    s = "is It TRue"
    assert make_lower(s) == "is it true"


def test_script2():
    s = "is It TRue"
    assert make_upper(s) == "IS IT TRUE"


def test_script3():
    s = "is It TRue"
    assert make_capital(s) == "Is It True"


s = "my Name IS Abrar"

upper = make_upper(s)
lower = make_lower(s)
capital = make_capital(s)
print(upper)
print(lower)
print(capital)
