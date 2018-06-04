from turtle import *

def svtree( trunklength, levels ):
    """ svtree: draws a side-view tree
        trunklength = the length of the first line drawn ("the trunk")
        levels = the depth of recursion to which it continues branching
    """
    if levels == 0:
        return
    else:
        # draw the original trunk (1 line)
        forward(trunklength)
        # turn a little bit to position the first subtree (1 line)
        left(30)
        # recurse! with both a smaller trunk and levels (1 line)
        svtree(trunklength / 2, levels - 1)
        # turn the other way  to position the second subtree (1 line)
        right(60)
        # recurse again! (1 line)
        svtree(trunklength / 2, levels - 1)
        # turn and go backwards (2 steps: 2 lines)
        left(30)
        backward(trunklength)


def flakeside(sidelength, levels):
    if levels == 0:
        forward(sidelength)
        return
    else:
        newlen = sidelength / 3
        newlevel = levels - 1
        flakeside(newlen, newlevel)
        right(60)
        flakeside(newlen, newlevel)
        left(120)
        flakeside(newlen, newlevel)
        right(60)
        flakeside(newlen, newlevel)
        
def snowflake(sidelength, levels):
    """ fractal snowflake function - complete.
          sidelength: pixels in the largest-scale triangle side
          levels: the number of recursive levels in each side
    """
    flakeside( sidelength, levels )
    left(120)
    flakeside( sidelength, levels )
    left(120)
    flakeside( sidelength, levels )
    left(120)


def remOne(e, l):
    if l == []:
        return l
    elif l[0] == e:
        return l[1:]
    else:
        return l[0] + remOne(e, l[1:])

def clone(e, n):
    if n == 0:
        return []
    else:
        return [e] + clone(e, n-1)

def selectionSort(l):
    if l == []:
        return l
    else:
        m = min(l)
        return [m] + selectionSort(remOne(m, l))

def merge(l1, l2):
    if l1 == []:
        return l2
    elif l2 == []:
        return l1
    elif l1[0] <= l2[0]:
        return [l1[0]] + merge(l1[1:], l2)
    else:
        return [l2[0]] + merge(l1, l2[1:])

def mergesort(l):
    if l == []:
        return []
    elif len(l) == 1:
        return l
    else:
        mid = len(l) // 2
        front = l[:mid]
        back = l[mid:]
        return merge(mergesort(front), mergesort(back))

def lcs(s1, s2):
    if s1 == '' or s2 == '':
        return ''
    elif s1[0] == s2[0]:
        return s1[0] + lcs(s1[1:], s2[1:])
    else:
        rem1 = lcs(s1[1:], s2)
        rem2 = lcs(s1, s2[1:])
        if len(rem1) >= len(rem2):
            return rem1
        else:
            return rem2

def dropEvery(k, l):
    if len(l) < k:
        return l
    else:
        return l[:k] + dropEvery(k, l[k+1:])

def partition(l, k):
    if l == []:
        return [[],[]]
    else:
        rest = partition(l[1:], k)
        if l[0] == k:
            return [[k] + rest[0], rest[1]]
        else:
            return [rest[0], [l[0]] + rest[1]]

def countDistinct(l):
    if l == []:
        return 0
    else:
        p = partition(l[1:], l[0])
        return 1 + countDistinct(p[1])


def remOne(v, l):
    if l == []:
        return []
    elif l[0] == v:
        return l[1:]
    else:
        return [l[0]] + remOne(v, l[1:])

def selectionSort(l):
    if l == []:
        return l
    else:
        m = min(l)
        p = partition(l, m)
        return p[0] + selectionSort(p[1])


def merge(l1, l2):
    if l1 == []:
        return l2
    elif l2 == []:
        return l1
    elif l1[0] <= l2[0]:
        return [l1[0]] + merge(l1[1:], l2)
    else:
        return [l2[0]] + merge(l1, l2[1:])

def insert(v, l):
    return merge([v], l)

def insertionSort(l):
    if l == []:
        return l
    else:
        return insert(l[0], insertionSort(l[1:]))

def consecutive(v, l):
    if l == [] or l[0] != v:
        return 0
    else:
        return 1 + consecutive(v, l[1:])

def compress(l):
    if l == []:
        return []
    else:
        first = l[0]
        num = consecutive(first, l)
        return [[num, first]] + compress(l[num:])


