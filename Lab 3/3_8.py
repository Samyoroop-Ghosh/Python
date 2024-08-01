import math 

def sumCos(x,n) :
    sum=1
    power=1
    if n%2 == 0 :
        end = n+1
    else :
        end = n+2
        
    print("1 ", end='')
    for i in range(2, end, 2) :
        print(f"{((-1)**(power))}x^{i}/{i}! ", end='')
        sum += (math.pow(x,i)/math.factorial(i)) * ((-1)**(power))
        power += 1
        
    
    print(f"\nCos({x}) : {sum} ")
 

x = int(input("Enter x of cos(x) : "))
n = int(input("Enter n : "))       
sumCos(x,n)