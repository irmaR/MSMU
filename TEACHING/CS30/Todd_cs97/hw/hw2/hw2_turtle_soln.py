from turtle import *

def regularNGon(n, sideLength):
    nGonHelper(n, sideLength, 360/n)

def nGonHelper(n, sideLength, angle):
    if n == 0:
        return
    else:
        forward(sideLength)
        left(angle)
        nGonHelper(n-1, sideLength, angle)

def archSpiral(initialLen, increment, angle, n):
    if n == 0:
        return
    else:
        forward(initialLen)
        left(angle)
        newLen = initialLen + increment
        archSpiral(newLen, increment, angle, n-1)

def logSpiral(initialLen, percentIncrease, angle, n):
    if n == 0:
        return
    else:
        forward(initialLen)
        left(angle)
        newLen = initialLen * (1 + percentIncrease/100)
        logSpiral(newLen, percentIncrease, angle, n-1)
