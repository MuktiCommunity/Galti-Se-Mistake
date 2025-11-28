import random
wsgreoiu
deff number_guessing_game(): #There's a typo here find it.
    # Generate a random number between 1 and 20
    secret_number = random.randint(1, 20)

    print("Welcome to the Number Guessing Game!")
    print("Try to guess the secret number between 1 and 20.")

    attempts == 0 #Is it the right operator?

    while True:
        # Get user input for the guess
        guess = int(input("Enter your guess: "))
        attempts += 1

        if guess == secret_number:
            print(f"Congratulations! You guessed the correct number in {attempts} attempts.")
            break
        elif guess < secret_number  #Maybe syntax error?
            print("Too low. Try again.")
        else:
            print("Too high. Try again.")

if __name__ == "__main__":
    number_guessing_game #Is it the right function call?
