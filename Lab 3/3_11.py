def print_spiral_matrix(n):
    # Create an n x n matrix filled with zeros
    matrix = [[0]*n for _ in range(n)]
    
    # Define initial boundaries for rows and columns
    top, bottom = 0, n - 1
    left, right = 0, n - 1
    
    num = 1  # Start filling with 1
    
    while top <= bottom and left <= right:
        # Fill top row
        for i in range(left, right + 1):
            matrix[top][i] = num
            num += 1
        top += 1
        
        # Fill right column
        for i in range(top, bottom + 1):
            matrix[i][right] = num
            num += 1
        right -= 1
        
        if top <= bottom:
            # Fill bottom row
            for i in range(right, left - 1, -1):
                matrix[bottom][i] = num
                num += 1
            bottom -= 1
        
        if left <= right:
            # Fill left column
            for i in range(bottom, top - 1, -1):
                matrix[i][left] = num
                num += 1
            left += 1
    
    # Print the matrix
    for row in matrix:
        print(" ".join(map(str, row)))

# Example usage:
try:
    N = int(input("Enter the number of lines N: "))
    if N <= 0:
        raise ValueError("N must be a positive integer.")
    print_spiral_matrix(N)
except ValueError as e:
    print(e)
