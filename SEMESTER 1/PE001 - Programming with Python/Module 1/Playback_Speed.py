def pause(s):
    for char in s:
        if char == " ":
            print("...", end = "")
        else:
            print(char, end = "")

s = input("Enter your speech: ")
pause(s)