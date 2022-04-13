# Guess the Number


'''
The program tells the player that it has come up with a secret number
and will give the player five chances to guess it. The code that lets the player
enter a guess and checks that guess is in a for loop that will loop at most five
times. The first thing that happens in the loop is that the player types in a
guess. Since input() returns a string, its return value is passed straight into
int(), which translates the string into an integer value. This gets stored in a
variable named guess.

'''


import random


def GuessNumber(SecreteNumber):
    
    for i in range(0,5):
        print("guess the number")
        guess=int(input())
        
        if(guess==0):
            print("0 is Ivalid Number enter the valid number: ")
        elif(guess < SecreteNumber):
            print("your guess is too low: ")
        elif (guess > SecreteNumber):
            print("your guess is too high: ")
        else:
            break    # This condition is the correct guess!

    if (guess ==SecreteNumber):
        print(f"good Job You guessed my number in {i} taken")
    else:
        print(f"Nope . the number i was thinking {SecreteNumber}")
    

def main(): 
    Number=random.randint(1,20)
    print("I am thinking of a number between 1 to 20")

    GuessNumber(Number)


if __name__=="__main__":
    main()
