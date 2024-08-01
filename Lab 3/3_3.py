import math

def _solve_quadratic_eqn_(a,b,c):
    d = (b**2) - (4*a*c)
    if d >= 0 :
        print(f"Root 1 : {(-b + math.sqrt(d)) / (2 * a)}")
        print(f"Root 2 : {(-b - math.sqrt(d)) / (2 * a)}")
    else :
        print("Equation has no real roots")

a = int(input("Enter the A coeffecient : "))
b = int(input("Enter the B coeffecient : "))
c = int(input("Enter the C coeffecient : "))

print(f"Quadratic Equation : {a}x2 + {b}x + {c} {_solve_quadratic_eqn_(a,b,c)}")


