d = {"!": 1, "@": 2, "#": 3, "$": 4, "%": 5, "^": 6}


def create_list(dic):
    l = []
    for key, value in enumerate(d):
        l.append(value)
        l.append(key + 1)

    print(l)


create_list(d)
