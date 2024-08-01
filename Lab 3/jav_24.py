import math
n1 = int(input("Enter 1st number : "))
n2 = int(input("Enter 2nd number : "))
print(f"HCF of {n1} and {n2} = {math.gcd(n1,n2)} (using math.gcd())")
print(f"LCM of {n1} and {n2} = {math.lcm(n1,n2)} (using math.lcm())")

if n1>n2 :
    num = n1
else :
    num = n2
    
for i in range (num, 1, -1) :
    if n1%i == 0 and n2%i == 0 :
        print(f"HCF of {n1} and {n2} = {i}")
        print(f"LCM of {n1} and {n2} = {int((n1*n2)/i)}")
        break