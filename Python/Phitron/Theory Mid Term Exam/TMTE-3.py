def nearly_equal(a, b):
    length_difference = abs(len(a) - len(b))
    if length_difference > 1:
        return False

    if len(a) < len(b):
        a, b = b, a

    i = j = 0
    count = 0

    while i < len(a) and j < len(b):
        if a[i] != b[j]:
            count += 1
            if length_difference == 0:
                j += 1
        else:
            j += 1
        i += 1

    return count <= 1


print(nearly_equal("python", "perl"))
print(nearly_equal("perl", "pearl"))
