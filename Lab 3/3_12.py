import math

def numPatternActual(n) :
    if (n>0) :
                
        for i in range(1,n+1) :
            
            for j in range (1, n+1):                    
                    if (j == 1) :
                        print(i,end='\t')
                    elif j==2 :
                        print("1",end='\t')
                    else :
                        print(int(math.pow(i,j-2)),end='\t')
                    
                
            print()     
                
    else :
        print("Please check your input")
        
n = int(input("Enter the no of terms : "))          
numPatternActual(n)