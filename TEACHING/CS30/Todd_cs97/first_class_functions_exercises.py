# Problems here
# https://docs.google.com/document/d/1V6LCDsaS4DzFWwEuMKRWM3zdfeV9HVr8bAt2P_WEw4I/edit?ts=5a04fa35

from functools import reduce

# 3.
def isSorted(l):
    if len(l) < 2:
        return True
    else:
        return l[0] <= l[1] and isSorted(l[1:])

def sortedLists(l):
    return list(filter(isSorted, l))


# 4.
def average(l):
    return reduce(lambda x,y: x+y, l) / len(l)


# 5.
def wordCount(word, l):
    flattened = reduce(lambda x,y: x+y, l)
    filtered = list(filter(lambda w: w == word, flattened))
    return len(filtered)



# 6.
def pennypincher(l):
    discounted = map(lambda x: x * 0.9, l)
    cheapEnough = filter(lambda x: x < 200, discounted)
    return reduce(lambda x,y: x+y, cheapEnough)

#7.
def crosswordFind(letter, position, length, wordList):
    return list(filter(lambda w : len(w) == length and position >= 0
                       and position < len(w) and w[position] == letter, wordList))

#8.
def contains(s1, s2):
    ls2 = len(s2)
    matches = list(filter(lambda i: s1[i:i+ls2] == s2, range(len(s1))))
    return matches != []

#9.
def lookup(k, alist):
    filtered = list(filter(lambda p: p[0] == k, alist))
    if filtered == []:
        return None
    else:
        return filtered[0][1]

#10
def invert(alist):
    return list(map(lambda p: [p[1], p[0]], alist))


#11
def rmChar(c, s):
    rmC = list(filter(lambda letter: letter != c, list(s)))
    return reduce(lambda x,y: x+y, rmC)


#12
def intersect(l1, l2):
    return list(filter(lambda x: x in l2, l1))


#13
def innerMultiply(l, n):
    return list(map(lambda innerL: list(map(lambda m: m*n, innerL)), l))
