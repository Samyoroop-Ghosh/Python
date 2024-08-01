def print_8_segment_display(n):
    if n == 2:
        print("_")
        print("_|")
        print("|_")
    elif n == 3:
        print("_")
        print("_|")
        print("_|")
    elif n == 4:
        print("|_|")
        print(" |")
        print(" |")
    else:
        print("Unsupported value of N. Please enter 2, 3, or 4.")

# Example usage:
try:
    N = int(input("Enter the number of lines N (2, 3, or 4): "))
    if N not in [2, 3, 4]:
        raise ValueError("N must be 2, 3, or 4.")
    print_8_segment_display(N)
except ValueError as e:
    print(e)
