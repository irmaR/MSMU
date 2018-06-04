
from random import choice

def rpsCheat(personChoice):
    return "computer wins"

def rpsRock(personChoice):
    if personChoice == 'rock':
        return 'tie game'
    elif personChoice == 'paper':
        return 'person wins'
    else:
        return 'computer wins'

def rps2(personChoice, compChoice):
    if (compChoice == personChoice):
        return 'tie game'
    elif (compChoice == 'rock' and personChoice == 'paper'):
        return 'person wins'
    elif (compChoice == 'paper' and personChoice == 'scissors'):
        return 'person wins'
    elif (compChoice == 'scissors' and personChoice == 'rock'):
        return 'person wins'
    else:
        return 'computer wins'

def rpsRandom(personChoice):
    compChoice = choice(['rock', 'paper', 'scissors'])
    return rps2(personChoice, compChoice)

