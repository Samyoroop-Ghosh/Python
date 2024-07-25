base = int(input("Enter the base : "))
exp = int(input("Enter the exponent : "))
result = 1
i=1

while i<=exp:    
    result *= base
    #print(f"{base} ^ {i} = {result}")
    i+=1

print(f"{base} ^ {exp} = {result}")
    