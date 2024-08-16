it_companies = {"Facebook", "Google", "Microsoft", "Apple", "IBM", "Oracle", "Amazon"}

choice = None

while choice != 0:
    print("\n\nMenu:")
    print("1. Find the length of the set it_companies")
    print("2. Add 'Twitter' to it_companies")
    print("3. Insert multiple IT companies at once to the set it_companies")
    print("4. Remove one of the companies from the set it_companies")
    print("5. What is the difference between remove and discard")

    
    choice = int(input("\nEnter your choice : "))
    
    if choice==1:
        print(f"\nLength of set it_companies : {len(it_companies)}")
        print(f"\n{type(it_companies)} : {it_companies}")

    elif choice==2:
        it_companies.add("Twitter")
        print(f"\n{type(it_companies)} : {it_companies}")    
            
    elif choice==3:
        while True:
            newComp=input("\nEnter new company : ")
            it_companies.add(newComp)
            i=input("\nDo you want to enter another company [Y/N]: ")
            if i.upper == "N":
                break
        print(f"\n{type(it_companies)} : {it_companies}")      
            
    elif choice==4:
        input4 = input("\nEnter company to delete : ")
        if len(it_companies)==0:
            print(f"Set is empty. Cannot remove any company.")
        else:
            if input4 not in it_companies:
                print(f"{input4} not found in Set it_companies")
            else:               
                it_companies.remove(input4)
                print(f"\nAfter removing {input4} :\n{type(it_companies)} : {it_companies}")      
                   
    elif choice==5:
        print("\nremove() and discard() :")
        print("Both remove(element) and discard(element) are used to remove an element from the set. \nHowever, if element is not found in the set, \nremove(element) returns a KeyError whereas discard(element) just continues execution.")
        print("\nLets find out with an example : ")
        print(f"\nOriginal Set : {it_companies}")
        

        copy1 = it_companies
        copy2 = it_companies
        
        discardCompany = input("\nEnter company to discard : ")
        copy1.discard(discardCompany)
        print(f"\nAfter discarding {discardCompany} \n{type(copy1)} : {copy1}")
        
        removeCompany = input("\nEnter company to remove : ")
        copy2.remove(removeCompany)
        print(f"After removing {removeCompany} \n{type(copy2)} : {copy2}")

        

            
        
    


