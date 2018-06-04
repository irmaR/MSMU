from doctest import testmod

def square(x):
    """Square the given number.

    >>> square(34)
    1156
    >>> square(3)
    9
    """
    return x*x

def sumOfSquares(x,y):
    return square(x) + square(y)


if __name__ == "__main__": 
    testmod()
