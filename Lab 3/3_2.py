import math

a = int(input("Enter the A coeffecient : "))
b = int(input("Enter the B coeffecient : "))

def slopeLinear(a,b) :
    slope = -(a/b)
    return slope;

print(f"Slope = {slopeLinear(a,b)}")