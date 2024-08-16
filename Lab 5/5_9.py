seasons={1:'WINTER', 2:'WINTER', 3:'SUMMER', 4:'SUMMER', 5:'SUMMER', 6:'MONSOON', 7:'MONSOON', 8:'MONSOON', 9:'MONSOON', 10:'AUTUMN', 11:'AUTUMN', 12:
    'WINTER'}

while True:
    monthNum = int(input("Enter month number : "))
    if monthNum in seasons.keys():
        print(seasons[monthNum])
    else:
        print("Invalid month number")
        break