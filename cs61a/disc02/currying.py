def curry(func):
    """
    Returns a Curried version of a two-argument function FUNC.
    >>> from operator import add, mul, mod
    >>> curried_add = curry(add)
    >>> add_three = curried_add(3)
    >>> add_three(5)
    8
    >>> curried_mul = curry(mul)
    >>> mul_5 = curried_mul(5)
    >>> mul_5(42)
    210
    >>> curry(mod)(123)(10)
    3
    """
    "*** YOUR CODE HERE ***"

    def ret(x):
        def res(y):
            return func(x, y)

        return res

    return ret


# Solution with lambda
def curry_lambda(func):
    return lambda arg1: lambda arg2: func(arg1, arg2)
