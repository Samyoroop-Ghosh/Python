n = int(input("Enter the number : "))

def prime(n) :
    isPrime = 1
    
    if n==2 :
        isPrime = 0
    else : 
        for i in range (2, n) :
            if n%i == 0 :
                isPrime = 0
                break
    return isPrime
        
print(f"Prime Numbers <= {n} are :")        
for i in range (1,n+1) :
    if(prime(i)):
        print(f"{i} ")