# - Write a Python script that asks for an integer and prints whether it's a positive, negative, or zero.
num=int(input("Enter a number to print:"))
if num > 0:
    print(f"Number {num} is Positive")
elif num < 0:
    print(f"Number {num} is Negative")
else:
    print("Number  is zero")