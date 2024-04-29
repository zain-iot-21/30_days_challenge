import re

def is_strong_password(password):
    letter = re.search(r'[a-zA-Z]', password)
    number = re.search(r'\d', password)
    special = re.search(r'[!@#$%^&*()-_+=]', password)

    if  letter and number and special:
        return True
    else:
        return False

password = input("Enter your password: ")
if is_strong_password(password):
    print("Strong password!")
else:
    print("Password is not strong. Please include letters, numbers, and special characters.")
