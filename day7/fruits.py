fruits = []

for i in range(5):
    fruit = input("Enter fruit {}: ".format(i+1))
    fruits.append(fruit)

print("List of fruits:")
for fruit in fruits:
    print(fruit)
