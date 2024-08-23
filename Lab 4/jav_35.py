def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

def display_primes(start, end):
    for num in range(start, end + 1):
        if is_prime(num):
            print(num, end=" ")

# Example usage
start = 10
end = 50
print("Prime numbers between", start, "and", end, ":")
display_primes(start, end)
