
from random import randint
from random import choice
from urllib.request import urlopen
from collections import defaultdict

# idea: start with just handling 3 and 5, then do an active
# experiment with the class to do the right thing for multiples of 15

def fizzbuzz(n):
    if (n % 3 == 0 and n % 5 == 0):
       return 'fizzbuzz'
    elif (n % 3 == 0):
        return 'fizz'
    elif (n % 5 == 0):
        return 'buzz'
    else:
        return n

[fizzbuzz(n) for n in range(1, 101)]


def rpsVersusRock(move):
    if (move == 'rock'):
        return 'We tied.'
    elif (move == 'paper'):
        return 'You win!'
    else:
        return 'You lose!'

# now build a player that chooses randomly

def randomPlayer():
    n = randint(1, 3)
    if (n == 1):
        return 'rock'
    elif (n == 2):
        return 'paper'
    else:
        return 'scissors'

# now show how we can pass the result of the randomPlayer to rpsVersusRock

def shakespeare():
    shakespeare = urlopen('http://composingprograms.com/shakespeare.txt')
    words = shakespeare.read().decode().split()
    ophelia = len([w for w in words if w == 'Ophelia'])
    hamlet = len([w for w in words if w == 'Hamlet'])
    longwords = [w for w in words if len(w) >= 10]
    unique = set(longwords)
    longest = max(unique, key=lambda x: len(x))
    freqs = [(item, longwords.count(item)) for item in unique]
    result = max(freqs, key=lambda x: x[1])
    return (ophelia, hamlet, result, longest)


def shakespeareGenerator():
    shakespeare = urlopen('http://composingprograms.com/shakespeare.txt')
    words = shakespeare.read().decode().split()
    stopwords = [',', ':', ';', '.', '?', '!', 'and', 'the', 'And', 'The', 'I', 'am', 'a', 'have', 'that', 'you', 'You']
    words = [w for w in words if len(w) > 3]
    bigrams = [[words[i], words[i+1]] for i in range(len(words) - 1)]
    freqs = {w:defaultdict(int) for w in set(words)}
    for bigram in bigrams:
        d = freqs[bigram[0]]
        d[bigram[1]] += 1
    next = {}
    for key, value in freqs.items():
        ordered = sorted(value.items(), key=lambda x:-x[1])
        next[key] = ordered[0:5]
    return next

nextwords = shakespeareGenerator()

def createText(first):
    next = first
    result = first
    for i in range(20):
        next = choice(nextwords[next])[0]
        result += " " + next
    return result





