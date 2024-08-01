def numPattern(n) :
    if (n>0) :
        x = 0
        y = 0
        
        for i in range(1,n+1) :
            
            if i%2 != 0 :
                y = x
                for j in range (1, n+1):
                    x += 1
                    y += 1
                    print(x,end='\t')
            else :
                y += n
                for j in range (1, n+1):                    
                    print(y,end='\t')
                    y -= 1
                    x += 1
                
            print()     
                
    else :
        print("Please check your input")
  
def numPatternActual(n) :
    if (n>0) :
        x = 0
        y = 0
        
        for i in range(1,n+1) :
            
            if i%2 != 0 :
                y = x
                for j in range (1, n+1):
                    x += 1
                    y += 1
                    print(x,end='\t')
            else :
                y += n
                for j in range (1, n+1):                    
                    print(y,end='\t')
                    y -= 1
                    x += 1
                
            print()     
                
    else :
        print("Please check your input")
#n = int(input("Enter the no of terms : "))          
numPatternActual(3)