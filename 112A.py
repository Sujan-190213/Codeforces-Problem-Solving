str1 = input();
str1 = str1.lower()
str2 = input();
str2 = str2.lower()
if str1.lower() == str2.lower():
    print(0)
elif str1.lower() > str2.lower():
    print(1)
elif str1.lower() < str2.lower():
    print(-1)