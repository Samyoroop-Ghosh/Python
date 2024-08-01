n = int(input("Enter the no of terms : "))

def sumPattern(n) :
    sum=0
    for i in range(1, n+1) :
        sum += (1/i * ((-1)**(i+1)))
    
    print(f"Sum of series : {sum} ")
        
sumPattern(n)