from turtle import *

def tree( trunkLength, angle, levels ):
    left(90)
    sidewaysTree(trunkLength, angle, levels)

def sidewaysTree( trunkLength, angle, levels ):
    """ draws a sideways tree
        trunklength = the length of the first line drawn ("the trunk")
        angle = the angle to turn before drawing a branch
        levels = the depth of recursion to which it continues branching
    """
    if levels == 0:
        return
    else:
        forward(trunkLength)
        left(angle)
        newLen = trunkLength / 2
        sidewaysTree(newLen, angle, levels - 1)
        right(2 * angle)
        sidewaysTree(newLen, angle, levels - 1)
        left(angle)
        backward(trunkLength)
