n = int(input("Enter the number : "))
count = 0
copy = n

while(copy > 0) :
    digit = copy%10
    count += 1
    copy //= 10

print(f"{n} has {count} digits")