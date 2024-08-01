n = int(input("Enter the number : "))
rev = 0
copy = n

while(copy > 0) :
    digit = copy%10
    rev = rev * 10 + digit
    copy //= 10

if rev==n : 
    print(f"Reverse of {n} is {rev}, hence PALINDROME")
else :
    print(f"Reverse of {n} is {rev}, hence NOT PALINDROME")
