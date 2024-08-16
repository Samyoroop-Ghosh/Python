A = {19, 22, 24, 20, 25, 26}
B = {19, 22, 20, 25, 26, 24, 28, 27}
choice = None

while choice not in (0,7):
    
    print(f"\n\nA : {A}")
    print(f"B : {B}")
    print("\nMenu:")
    print("1. Join A and B")
    print("2. Find A intersection B")
    print("3. Is A subset of B")
    print("4. Are A and B disjoint sets")
    print("5. Join A with B and B with A")
    print("6. What is the symmetric difference between A and B")
    print("7. Delete the sets completely")
    print("0. Anything to Exit")
    
    choice = int(input("\nEnter your choice : \n"))
    
    if choice==1:
        AjoinB = A.union(B)
        print(AjoinB)

    elif choice==2:
        AintersectionB = A.intersection(B)
        print(AintersectionB)    
            
    elif choice==3:
        if A.issubset(B):
            print("A is a subset of B")
        else:
            print("A is not a subset of B")
            
    elif choice==4:
        if A.isdisjoint(B):
            print("A and B are disjoint sets")
        else:
            print("A and B are not disjoint sets")
                   
    elif choice==5:
        AjoinB = A.union(B)
        print(AjoinB)
        
        BjoinA = B.union(A)
        print(BjoinA)
    
    elif choice==6:
        AsymmdiffB = A.symmetric_difference(B)
        print(AsymmdiffB)
    
    elif choice==7:
        del(A)
        del(B)
        print("Sets A & B deleted")
        
    else:
        print("Exiting...")
        choice=0

        

            
        
    


