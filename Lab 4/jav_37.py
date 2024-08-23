def print_pattern_23():
    num = 1
    for i in range(1, 4):
        for j in range(2 * i - 1):
            print(num, end=" ")
            num += 1
        print()

# Example usage
print_pattern_23()
