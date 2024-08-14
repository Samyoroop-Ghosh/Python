str = input("Enter a sentence : ")

countAlpha = 0
countNum = 0

for letter in str :
    if letter.isalpha() :
        countAlpha+=1
    elif letter.isdigit() :
        countNum+=1

print(f"LETTERS : {countAlpha} \nDIGITS : {countNum}")