myList = ['Ram', 'Shyam', 'Jodhaa', 'Akbar', 'Anthony']

def printList(myList):
    for x in range(len(myList) - 1, -1, -1):
        print(myList[x])
        
printList(myList)