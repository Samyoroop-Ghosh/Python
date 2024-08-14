ages = [19, 22, 19, 24, 20, 25, 26, 24, 25, 24]
choice = None


while (choice != 0) :
        print("\n\nChoose an option:")
        print("1. Sort the list and find the min and max age")
        print("2. Add the min age and the max age again to the list")
        print("3. Find the median age (one middle item or two middle items divided by two)")
        print("4. Find the average age (sum of all items divided by their number)")
        print("5. Find the range of the ages (max minus min)")
        print("6. Compare the value of (min - average) and (max - average), use abs() method")
        print("Anything else to Exit")
        
        choice = int(input("Enter your choice (0-6): "))
        
        
        if choice == 1:
            ages.sort()
            minAge = ages[0] #first element of sorted list
            maxAge = ages[-1] #last element of sorted list
            print(ages[:]) 
            print(f"Minimun : {minAge} \nMaximun : {maxAge}")
            
        elif choice == 2:
            ages.sort()
            minAge = ages[0] #first element of sorted list
            maxAge = ages[-1] #last element of sorted list
            ages.append(minAge)
            ages.append(maxAge)
            ages.sort()   
            print(f"Appending {minAge} & {maxAge} : {ages[:]}")
                    
        elif choice == 3:
            length = len(ages)
            if length%2 == 0:
                median = (ages[length//2 -1] + ages[length//2]) /2
            else:
                median = ages[length//2]
                print(ages[:]) 
            print(f"Median Age : {median}")
             
        elif choice == 4:
            meanAge = sum(ages)/len(ages)
            print(f"Average Age : {meanAge}")
            
        elif choice == 5:
            print(ages[:]) 
            print(f"Range : {abs(ages[0]-ages[-1])}")
            
        elif choice == 6:
            print(ages[:]) 
            print(f"(min-average) : {abs(ages[0]-meanAge)} \n(max-mean) : {abs(ages[-1]-meanAge)}")          
                      
        
        else:
            choice=0
            print("Exiting the program \n...")



