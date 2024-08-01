import math 

def sumSin(x,n) :
    sum=0
    power=1
    if n%2 == 0 :
        end = n+2
    else :
        end = n+1
        
    for i in range(1, end, 2) :
        print(f"{((-1)**(power+1))}x^{i}/{i}! ", end='')
        sum += (math.pow(x,i)/math.factorial(i)) * ((-1)**(power+1))
        power += 1
        
    
    print(f"\nSin({x}) : {sum} ")
 

x = int(input("Enter x of sin(x) : "))
n = int(input("Enter n : "))       
sumSin(x,n)