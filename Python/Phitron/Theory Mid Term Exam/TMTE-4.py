def anagrams(w):
    group = {}

    for word in w:
        sorted_word = "".join(sorted(word))
        if sorted_word in group:
            print(sorted_word)
            group[sorted_word].append(word)
        else:
            group[sorted_word] = [word]

    anagram_lists = list(group.values())
    return anagram_lists


words = ["eat", "ate", "done", "tea", "soup", "node"]
result = anagrams(words)
print(result)
