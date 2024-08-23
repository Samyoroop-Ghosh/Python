str = input("Enter a string : ")

char_count = {}

for char in str :
    if char in char_count :
        char_count[char] += 1
    else :
        char_count[char] = 1
        
for x in char_count :
    print(f"{x} , {char_count[x]}")
    
    

