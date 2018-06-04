from doctest import testmod

def doubleAll(l):
    if l == []:
        return []
    else:
        newFirst = 2 * l[0]
        return [ newFirst ] + doubleAll(l[1:])

def countPos(l):
    if l == []:
        return 0
    else:
        cRest = countPos(l[1:])
        if l[0] > 0:
            return cRest + 1
        else:
            return cRest

def intRange(low, hi):
    if low > hi:
        return []
    else:
        return [low] + intRange(low+1, hi)


def merge(l1, l2):
    if l1 == []:
        return l2
    elif l2 == []:
        return l1
    elif l1[0] <= l2[0]:
        return [l1[0]] + merge(l1[1:], l2)
    else:
        return [l2[0]] + merge(l1, l2[1:])

