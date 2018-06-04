
def countPos(l):
    '''
    Returns the number of elements of the list l that are positive.
    >>> countPos([1, -4, 0, 4, 8, 0])
    3
    '''
    return


def dotProduct(v1, v2):
    '''
    Computes the dot product of the vectors v1 and v2, each of which is a list
    of numbers.  The dot product of [x1,...,xn] and [y1,...,yn] is
    x1*y1 + ... + xn*yn. You may assume that v1 and v2 have the same length.
    >>> dotProduct([1,2,3],[4,5,6])
    32    
    '''
    return


def partition(v, l):
    '''
    Partitions the list l into a list of elements that are equal to the value v
    and a list of all other elements. Note that the result of partition should
    always be a list that contains exactly two lists.
    >>> partition(2, [1,5,3,2,2,1,3,2])
    [[2, 2, 2], [1, 5, 3, 1, 3]] 
    '''
    return


def toDigitList(n):
    '''
    Converts a given nonnegative integer n to a list of digits.
    >>> toDigitList(403)
    [4, 0, 3]
    '''    
    return


def digitalRootAndPersistence(n):
    '''
    Consider the process of taking a nonnegative integer n, summing its digits, then
    summing the digits of the number derived from it, etc., until the remaining
    number has only one digit. The digit obtained is called the *digital root* of
    n, and the number of sums required to obtain a single digit from a number n is
    called the *additive persistence* of n.

    For example, 9879 has a digital root of 6 since 9+8+7+9 = 33 and 3+3 = 6.  Since
    two numbers were summed in this process, the additive persistence of 9879 is 2.

    This function takes a nonnegative integer n and returns a pair of its digital
    root and its additive persistence, represented as a list of two numbers.
    >>> digitalRootAndPersistence(9879)
    [6, 2]

    NOTE: You may use Python's built-in sum function, which sums the elements of
    a list of numbers, and the toDigitList function you defined above will also be
    useful.
    '''
    return


def merge(l1, l2):
    '''
    Accepts two integer lists l1 and l2, which are each assumed to be sorted from
    least to greatest, and produces a new list that contains the elements of both
    lists, also sorted from least to greatest.  Note that duplicates are allowed,
    both within and across lists.
    >>> merge([1,2,4], [2,3,3,5])
    [1, 2, 2, 3, 3, 4, 5]
    
    NOTE: This function is trickier to implement using loops than you might expect.
    Take care to ensure that all accesses to the lists l1 and l2 are in bounds!
    '''
    return
