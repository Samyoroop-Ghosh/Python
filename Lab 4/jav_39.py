def print_pattern_25():
    n = 4  # Number of rows
    for i in range(1, n + 1):
        for j in range(1, i):
            print(" ", end="")
        print(i, end="")
        for j in range(1, 2 * (n - i)):
            print(" ", end="")
        if i != n:
            print(i, end="")
        print()

# Example usage
print_pattern_25()
