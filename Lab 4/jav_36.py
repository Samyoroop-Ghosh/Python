def is_armstrong_number(num):
    digits = [int(d) for d in str(num)]
    power = len(digits)
    sum_of_powers = sum([d ** power for d in digits])
    return num == sum_of_powers

# Example usage
number = 153
if is_armstrong_number(number):
    print(f"{number} is an Armstrong number")
else:
    print(f"{number} is not an Armstrong number")
