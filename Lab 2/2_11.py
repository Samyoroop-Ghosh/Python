def sumOfDigits(num):
    
    copy = num
    sum = 0
    
    while(copy>0) :
        digit = copy%10
        copy //= 10
        sum += digit
        
    return sum


number = int(input("Enter a number: "))

print(f"Reverse of {number} is : {sumOfDigits(number)}")
