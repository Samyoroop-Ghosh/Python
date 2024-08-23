def sum_of_odd_numbers(matrix):
    return sum(num for row in matrix for num in row if num % 2 != 0)

# Example usage
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print("Sum of odd numbers:", sum_of_odd_numbers(matrix))
