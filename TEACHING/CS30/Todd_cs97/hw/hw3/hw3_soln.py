
def partition(v, l):
    if l == []:
        return [[],[]]
    else:
        rest = partition(v, l[1:])
        first = l[0]
        if first == v:
            return [[first] + rest[0], rest[1]]
        else:
            return [rest[0], [first] + rest[1]]


def countDistinct(l):
    if l == []:
        return 0
    else:
        p = partition(l[0], l[1:])
        return 1 + countDistinct(p[1])


def selectionSort(l):
    if l == []:
        return l
    else:
        m = min(l)
        p = partition(m, l)
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

def mergeSort(l):
    if len(l) <= 1:
        return l
    else:
        mid = len(l) // 2
        front = l[:mid]
        back = l[mid:]
        return merge(mergeSort(front), mergeSort(back))
