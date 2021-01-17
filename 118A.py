a = input("")
a = a.lower()
for ch in a:
    if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'y':
        pass
    else:
        print("." + ch, end="")
