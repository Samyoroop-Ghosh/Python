def is_multiple(m, n):
    if m % n == 0:
        return True
    else:
        return False

# Example usage
m = 10
n = 2
if is_multiple(m, n):
    print(f"{m} is a multiple of {n}")
else:
    print(f"{m} is not a multiple of {n}")
