def find_median(nums):
    nums.sort()
    n = len(nums)
    if n % 2 == 1:
        return nums[n // 2]
    else:
        return (nums[n // 2 - 1] + nums[n // 2]) / 2

# Example usage
numbers = [3, 5, 1, 4, 2]
print("Median:", find_median(numbers))
