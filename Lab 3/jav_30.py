def binary_to_decimal(binary):
    return int(binary, 2)

def decimal_to_binary(decimal):
    return bin(decimal).replace("0b", "")

choice = int(input("1. Binary to Decimal 2.Decimal to Binary : "))

if choice == 1:
    binary_num = input("Enter a binary number: ")
    print(f"Binary {binary_num} to Decimal: {binary_to_decimal(binary_num)}")
elif choice == 2:
    decimal_num = int(input("Enter a decimal number: "))
    print(f"Decimal {decimal_num} to Binary: {decimal_to_binary(decimal_num)}")