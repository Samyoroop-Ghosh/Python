def sum_of_even_numbers(arr):
    return sum(num for num in arr if num % 2 == 0)

# Example usage
arr = [1, 2, 3, 4, 5, 6]
print("Sum of even numbers:", sum_of_even_numbers(arr))
