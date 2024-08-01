def triPattern(n) :
    if (n>0) :
        print(".")
        while (n-1 > 0) :
            if(n-1 ==1) :
                print("/_\\")
                break
            
            else :
                print("/\\")
            n -= 1
    else :
        print("Please check your input")
  
n = int(input("Enter the no of terms : "))          
triPattern(n)