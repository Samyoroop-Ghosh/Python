studentDict = dict(first_name = "", last_name = "", gender = "", age = "", marital_status = "", skills = [], country = "", city = "", address = "")
choice=None
while(choice != 0):
    print("\n\nMenu:")
    print("1. Get the length of the student dictionary")
    print("2. Get the value of skills and check the data type, it should be a list")
    print("3. Modify the skills values by adding one or two skills")
    print("4. Get the dictionary keys as a list")
    print("5. Get the dictionary values as a list")
    print("6. Change the dictionary to a list of tuples using _items()_ method")
    print("7. Delete one of the items in the dictionary")
    print("8. Delete one of the dictionaries")
    choice = int(input("\nEnter your choice : "))
    
    if choice==1:
        print("\nLength of the dictionary: ", len(studentDict))
        print(studentDict)
        
    elif choice==2:
        print(studentDict["skills"])
        print(type(studentDict["skills"]))
        
    elif choice==3:
        studentDict["skills"] = []
        while True:
            mySkill = input("Enter skill : ")
            studentDict["skills"].append(mySkill)
            i = input("Do you want to add more skills [Y/N] : ")
            if i.upper() == 'N':
                break
        print(studentDict["skills"])
    elif choice==4:
        myKeysList = list(studentDict.keys())
        print(f"{type(myKeysList)} : {myKeysList}")
    elif choice==5:
        myValuesList = list(studentDict.values())
        print(f"{type(myValuesList)} : {myValuesList}")
    elif choice==6:
        myItemsList = list(studentDict.items())
        print(f"{type(myItemsList)} : {myItemsList}")
    elif choice==7:
        deleteSkill = input("Enter key to delete : ")
        if deleteSkill in studentDict:
            del studentDict[deleteSkill]
            print(f"{deleteSkill} has been removed from studentDict")
        else:
            print("Key not found.")
    elif choice==8:
        del studentDict
        print("studentDict has been deleted")
        break
    else:
        print("Exiting ...")
        break
        
        
    

