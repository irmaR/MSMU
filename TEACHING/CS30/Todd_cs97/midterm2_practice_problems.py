from functools import reduce

def average(l):
    return reduce(lambda x,y: x+y, l) / len(l)


def noZeroLists(l):
    return list(filter(lambda il: not(0 in il), l))


def intersect(l1, l2):
    return list(filter(lambda x: not(x in l2), l1))


def innerMultiply(l, n):
    return list(map(lambda innerL: list(map(lambda m: m*n, innerL)), l))


def crosswordFind(letter, position, length, wordList):
    return list(filter(lambda w : len(w) == length and position >= 0
                       and position < len(w) and w[position] == letter, wordList))


def wordCount(word, l):
    flattened = reduce(lambda x,y: x+y, l)
    filtered = list(filter(lambda w: w == word, flattened))
    return len(filtered)


def pennypincher(l):
    discounted = map(lambda x: x * 0.9, l)
    cheapEnough = filter(lambda x: x <= 200, discounted)
    return reduce(lambda x,y: x+y, cheapEnough)


def rmChar(c, s):
    rmC = list(filter(lambda letter: letter != c, list(s)))
    return reduce(lambda x,y: x+y, rmC)

