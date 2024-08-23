def calculate_sum_and_average(numbers):
    total_sum = sum(numbers)  # Calculate the sum of the array elements
    average = total_sum / len(numbers)  # Calculate the average
    
    return total_sum, average

# Example usage
numbers = [10, 20, 30, 40, 50]
total_sum, average = calculate_sum_and_average(numbers)

print("Sum:", total_sum)
print("Average:", average)
