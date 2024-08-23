def sum_of_diagonal_elements(matrix):
    return sum(matrix[i][i] for i in range(len(matrix)))

# Example usage
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print("Sum of diagonal elements:", sum_of_diagonal_elements(matrix))
