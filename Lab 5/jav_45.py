def search_element(arr, x):
    for i, element in enumerate(arr):
        if element == x:
            return i
    return -1

# Example usage
arr = [1, 2, 3, 4, 5]
x = 3
result = search_element(arr, x)
if result != -1:
    print(f"Element {x} found at index {result}")
else:
    print(f"Element {x} not found in the array")
