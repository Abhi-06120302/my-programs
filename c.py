'''import random
n = int(input("Enter a number: "))
m = random.randint(1,100)
while True:
    if n < m:
        print("Too low! Try again.")
        n = int(input("Enter a number: "))
    elif n > m:
        print("Too high! Try again.")
        n = int(input("Enter a number: "))
    else:
        break
if n == m:
    print("Congratulations! You guessed the number.")
else:
    print(f"Sorry, the number was {m}. Better luck next time!")'''


'''a = int(input("Enter a number:"))
b = input("Enter a word: ")
for i in range(a):
    print(b)
'''


'''name = input("Enter your name: ")
age = int(input("Enter your age: "))
past = input("Have you ever worked with AI/ML before? (yes/no): ")
future = input("What AI/ML would you like to learn in the future? ")
print(f"Hello {name}!")
print("age:", age)
print("Previous experience with AI/ML:", past)
print("Future interests in AI/ML:", future)'''

'''def simple_interest(principal, rate, time):
    interest = (principal * rate * time) / 100
    return interest
principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the rate of interest: "))
time = float(input("Enter the time in years: "))
interest = simple_interest(principal, rate, time)
print(f"The simple interest is: {interest}")
'''


'''def calculator():
    print("Welcome to the simple calculator!")
    print("Select operation:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")

    choice = input("Enter choice (1/2/3/4): ")

    if choice in ['1', '2', '3', '4']:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))

        if choice == '1':
            print(f"{num1} + {num2} = {num1 + num2}")
        elif choice == '2':
            print(f"{num1} - {num2} = {num1 - num2}")
        elif choice == '3':
            print(f"{num1} * {num2} = {num1 * num2}")
        elif choice == '4':
            if num2 != 0:
                print(f"{num1} / {num2} = {num1 / num2}")
            else:
                print("Error! Division by zero.")
    else:
        print("Invalid input")

calculator()'''
