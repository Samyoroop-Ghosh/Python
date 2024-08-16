fruits = ('mango','orange','apple','banana')
vegetables = ('onion','brinjal','tomato','lettuce')
animals = ('dog','cat','bird','fish')

choice = None

while choice != 0:
    print("\n\nChoose an option:")
    print("1. Join the three tuples and assign it to a variable called food_stuff_tp")
    print("2. Change the food_stuff_tp tuple to a food_stuff_lt list")
    print("3. Slice out the middle item or items from the food_stuff_tp tuple or food_stuff_lt list")
    print("4. Slice out the first three items and the last three items from food_stuff_lt list")
    print("5. Delete the food_stuff_tp tuple completely")
    print("Anything else to Exit")
    
    choice = int(input("\nEnter your choice : "))
    
    if choice==1:
        food_stuff_tp = fruits+vegetables+animals
        print(f"{type(food_stuff_tp)} : {food_stuff_tp}")
        
    elif choice==2:
        food_stuff_lt = list(food_stuff_tp)
        print(f"{type(food_stuff_lt)} : {food_stuff_lt}")
        
    elif choice==3:
        length = len(food_stuff_lt)
        if(length%2==0):
            # middle left element
            print(f"Removing '{food_stuff_lt[(length//2)-1]}' : ")
            food_stuff_lt.remove(food_stuff_lt[(length//2)-1])
            print(f"{type(food_stuff_lt)} : {food_stuff_lt}")
            # middle right element
            print(f"Removing '{food_stuff_lt[(length//2)-1]}' : ")
            food_stuff_lt.remove(food_stuff_lt[(length//2)-1])
            print(f"{type(food_stuff_lt)} : {food_stuff_lt}")
        else:
            # middle element
            print(f"Removing {food_stuff_lt[(length//2)-1]} : ")
            food_stuff_lt.remove(food_stuff_lt[(length//2)-1])
            print(f"{type(food_stuff_lt)} : {food_stuff_lt}")
            
    elif choice==4:
        if len(food_stuff_lt)>=6:  
            food_stuff_lt = food_stuff_lt[3:-3]
            print(f"{type(food_stuff_lt)} : {food_stuff_lt}")
        else:
            print("Not enough items in the list")
            
    elif choice==5:
        del food_stuff_lt
        print("List has been deleted")
        
    else:
        print("Exiting the program")
        choice=0

            
        
    


