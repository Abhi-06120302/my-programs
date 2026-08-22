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


a = 10
b = 20
a = b
print(a)