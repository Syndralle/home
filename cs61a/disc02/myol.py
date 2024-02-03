def f1():
    """
    >>> f1()
    3
    """
    "*** YOUR CODE HERE ***"
    print(3)


def f2():
    """
    >>> f2()()
    3
    """
    "*** YOUR CODE HERE ***"
    return f1


def f3():
    """
    >>> f3()(3)
    3
    """
    "*** YOUR CODE HERE ***"
    return lambda x: print(3)


def f4():
    """
    >>> f4()()(3)()
    3
    """
    "*** YOUR CODE HERE ***"
    return lambda: lambda x: f1
