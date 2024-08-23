import numpy as np

def sum_of_two_2d_arrays(arr1, arr2):
    return np.add(arr1, arr2)

# Example usage
arr1 = np.array([[1, 2], [3, 4]])
arr2 = np.array([[5, 6], [7, 8]])
result = sum_of_two_2d_arrays(arr1, arr2)
print("Sum of the two 2D arrays:\n", result)
