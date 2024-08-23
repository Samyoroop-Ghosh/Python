str = input("Enter a sentence : ")

p = str.split()
output = ""

for word in p :
    if word.isdigit() :
        output = output + "'" + word + "'" + "," 
        
print(f"[{output}]")
    
    

