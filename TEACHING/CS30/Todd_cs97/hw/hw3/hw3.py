
def partition(v, l):
    return


def countDistinct(l):
    return


def selectionSort(l):
    return


# for use in mergesort below; do not edit
def merge(l1, l2):
    if l1 == []:
        return l2
    elif l2 == []:
        return l1
    elif l1[0] <= l2[0]:
        return [l1[0]] + merge(l1[1:], l2)
    else:
        return [l2[0]] + merge(l1, l2[1:])


def mergeSort(l):
    return

