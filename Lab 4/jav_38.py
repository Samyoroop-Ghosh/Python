def print_pattern_24():
    for i in range(1, 5):
        for j in range(5 - i):
            print(" ", end=" ")
        for j in range(i, 0, -1):
            print(j, end=" ")
        for j in range(2, i + 1):
            print(j, end=" ")
        print()

# Example usage
print_pattern_24()
