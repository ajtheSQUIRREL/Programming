def is_palindrome(s):
    s = s.lower()
    return s == s[::-1]


word = input("Enter a string: ")

if is_palindrome(word):
    print("The String Is A Palindrome.")
else:
    print("The String Is Not A Palindrome.")
