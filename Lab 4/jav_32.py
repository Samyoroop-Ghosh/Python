def compute_euler(n):
    e = 1.0
    fact = 1.0
    for i in range(1, n + 1):
        fact *= i
        e += 1 / fact
    return e

# Example usage
terms = 10  # You can increase the number of terms for more accuracy
print("Euler's number e:", compute_euler(terms))
