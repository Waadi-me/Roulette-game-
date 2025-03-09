import random

def main():
    # Generate a random number between 1 and 6
    num = random.randint(1, 6)
    
    i = input("Do you want to play the roulette? 1/0 \n")
    
    if i == '1':
        guess = int(input("Guess a number between 1 and 6 \n"))
        
        if guess == num:
            print("You win")
        else:
            print("Incorrect number, please try again :)")
            print(f"Correct num was: {num}")
    else:
        print("Quitting the game")

if __name__ == "__main__":
    main()