import math

def isKrish(num):
    
    copy = num
    sum = 0
    
    while(copy!=0) :
        digit = copy%10
        copy //= 10
        sum += math.factorial(digit)
        
    return sum==num


number = int(input("Enter a number: "))

if isKrish(number):
    print(f"{number} is an Krishnamurthy number.")
else:
    print(f"{number} is not an Krishnamurthy number.")
