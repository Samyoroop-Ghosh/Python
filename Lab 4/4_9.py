def main():
    choice = None
    
    while (choice != 0) :
        print("\n\nChoose an option:")
        print("1. Reverse the string")
        print("2. Check if the string is a palindrome")
        print("3. Check if the string ends with a specific substring")
        print("4. Capitalize the first letter of each word")
        print("5. Check if the string is an anagram of another string")
        print("6. Remove vowels from the string")
        print("7. Find the length of the longest word in a sentence")
        print("0. Exit")
        
        choice = int(input("Enter your choice (0-7): "))
        
        if choice == 1:
            str1 = input("Enter a string : ")
            print(f"Reverse of {str1} is {str1[::-1]}")
            
        elif choice == 2:
            str1 = input("Enter a string : ")
            if str1 == str1[::-1]:
                print(f"'{str1}' is a palindrome.")
            else:
                print(f"'{str1}' is not a palindrome.")   
                    
        elif choice == 3:
            str1 = input("Enter a string : ")
            strend = input("Enter endswith : ")
            if str1.endswith(strend):
                print(f"{str1} ends with '{strend}'")
            else:
                print(f"{str1} does not end with '{strend}'")
                
        elif choice == 4:
            str1 = input("Enter a string : ")
            print(f"{str1.title()}")
            
        elif choice == 5:
            str1 = input("Enter a string : ")
            str2 = input("Enter another string : ")   
            if sorted(str1) == sorted(str2):
                print(f"'{str1}' is an anagram of '{str2}'")
            else:
                print(f"'{str1}' is not an anagram of '{str2}'")
        elif choice == 6:
            str1 = input("Enter a string : ")
            output = ""
            for char in str1:
                if char not in 'aeiouAEIOU':
                    output = output + char
            print(f"{str1} without vowels : {output}")
            
        elif choice == 7:
            str1 = input("Enter a string : ")
            words = str1.split()
            maxLength = 0                
            for i in words :
                if len(i) > maxLength:
                    maxLength = len(i)     
            print(f"Length of longest word is {maxLength}")  
                    
        else:
            choice=0
            print("Exiting the program.")

main()
