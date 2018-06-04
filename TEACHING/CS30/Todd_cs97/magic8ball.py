
from random import randint

def magic8ball(question):
    n = randint(1, 4)
    if (n == 1):
        return "Definitely!"
    elif (n == 2):
        return "No way!"
    elif (n == 3):
        return "It is not known."
    else:
        return "Maybe..."
