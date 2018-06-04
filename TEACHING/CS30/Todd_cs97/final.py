
'''
1) Implement a function sumToK(k, l) that takes an integer k and a list of integer
lists l and returns a count of the number of integer lists in l that sum to exactly
k.

For example, sumToK(10, [[1,2], [1,2,3,4], [5,5,0], [8,2,3], [-15, 25]]) returns 3,
since 3 of the 5 integer lists sum to exactly 10.

You may use any functions of Python that are available without needing to be
imported, for example sum, len, min, and max.  Highlight sum explicitly.
'''

'''
a) First implement sumToK using recursion.
'''
def sumToK_R(k, l):
    if l == []:
        return 0
    elif sum(l[0]) == k:
        return 1 + sumToK_R(k, l[1:])
    else:
        return sumToK_R(k, l[1:])

'''
b) In the execution of sumToK(10, [[1,2], [1,2,3,4], [5,5,0], [8,2,3], [-15, 25]]),
what is the first integer list to be summed?
    a) [1,2]
    b) [-15, 25]
    c) [1,2,3,4]
    d) [8,2,3]
    e) None of the above.

    Answer (for the implementation above): a
'''

'''
c) Now implement sumToK using a for loop instead of recursion.
'''
def sumToK_L(k, l):
    count = 0
    for innerL in l:
        if sum(innerL) == k:
            count += 1
    return count

'''
d) In the execution of sumToK(10, [[1,2], [1,2,3,4], [5,5,0], [8,2,3], [-15, 25]]),
what is the first integer list to be summed?
    a) [1,2]
    b) [-15, 25]
    c) [1,2,3,4]
    d) [8,2,3]
    e) None of the above.

    Answer (for the implementation above): a
'''

'''
e)
Now implement sumToK using a while loop instead of a for loop.
'''
def sumToK_W(k, l):
    count = 0
    i = 0
    while i < len(l):
        if sum(l[i]) == k:
            count += 1
        i += 1
    return count

'''
f) Finally implement sumToK with neither recursion nor a loop.  Instead make use of
one or more of map/filter/reduce.
'''
def sumToK_F(k, l):
    return len(list(filter(lambda innerL: sum(innerL) == k, l)))


'''
2) Consider the following code:

>>> p = [1, 2]
>>> swap(p)
>>> p

For each definition of swap below, say what the Python interpreter will print
after executing the last line of code above.

a)
'''
def swap2(p):
    p[0] = p[1]
    p[1] = p[0]
    return
'''
Answer: [2, 2]

b)
'''
def swap1(p):
    p = [p[1], p[0]]
    return
'''
Answer: [1, 2]

c)
'''
def swap3(p):
    x = p[0]
    y = p[1]
    x = x + 1
    y = y - 1
    return
'''
Answer: [1, 2]
'''

'''
3) Consider this function:
'''
def f(x):
    if x > 10:
        y = x
    elif x > 0:
        y = 2 * x
    else:
        y = 0
    return y

'''
a) Give a positive integer i such that f(i) returns 10, or say None if none exists.
Answer: 5

b) Give a positive integer i such that f(i) returns 11, or say None if none exists.
Answer: 11

c) Consider a function g that is identical to f but with the keyword "elif" replaced
by the keyword "if".  Give a positive integer i such that f(i) returns a different value
than g(i), or say None if none exists.
Answer: 11 [or any number greater than 10]

d) Consider that function g again.  Give a positive integer i such that f(i) returns
the same value as g(i), or say None if none exists.
Answer: 1 [or any number between 1 and 10]
'''
