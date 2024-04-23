import math

PI = math.pi

def circumference(r): # R for radius
    circum = 2 * PI * r
    return circum

radius = float(input("Enter the radius of a circle: \n"))

circum_frence = circumference(radius)

print(f"the cirumfrenece of the circle is {circum_frence}")