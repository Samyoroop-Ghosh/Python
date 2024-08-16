person={'first_name': 'Asabeneh', 'last_name': 'Yetayeh', 'age': 250, 'country': 'Finland', 'is_marred': True, 'skills': ['JavaScript', 'React', 'Node', 'MongoDB', 'Python'], 'address': {'street': 'Space street', 'zipcode': '02210'}}
choice=None

while(True):
    print("\n\nMENU")
    print("1. Check if the person dictionary has skills key, if so print out the middle skill in the skills list.")
    print("2. Check if the person dictionary has skills key, if so check if the person has 'Python' skill and print out the result.")
    print("3. If a person skills has only JavaScript and React, print('He is a front end developer'), if the person skills has Python, Node and MongoDB, print('He is a backend developer'), if the person skills has React, Node and MongoDB, Print('He is a fullstack developer'), else print('unknown title')")
    print("4. If the person is married and if he lives in Finland, print the information in format.")
    
    choice = int(input("\nEnter your choice : "))
    
    if choice==1:
        if 'skills' in person.keys():
            mid = len(person["skills"])//2
            print(f"\nMiddle Skill : {person['skills'][mid]}")
        else:
            print("\nSkills not found in Person")
    
    elif choice==2:
        if 'skills' in person.keys():
            if 'Python' in person["skills"]:
                print("\nPerson knows Python")
            else:
                print("\nPerson does not know Python")
        else:
            print("\nSkiils not found in Person")
    
    elif choice==3:
        if 'JavaScript' in person["skills"] and 'React' in person["skills"] and len(person["skills"]) == 2:
            print("\nHe is a front end developer")
        elif 'Node' in person["skills"] and 'MongoDB' in person["skills"]:
            if 'Python' in person["skills"]:
                print("\nHe is a backend developer")
            elif 'React' in person["skills"]:
                print("\nHe is a fullstack developer")
        else:
            print("\nUnknown title")
    
    elif choice==4:
        if person["is_marred"] == True and person['country'] == 'Finland':
            print("\n```py")
            print(f"\n{person['first_name']} {person['last_name']} lives in {person['country']}. He is married.")
            print("\n```")
        else:
            print("Person is either unmarried or does not live in Finland")
    elif choice==5:
        print("\nExiting ...")
        break