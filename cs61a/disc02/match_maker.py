def match_k(k):
    """Returns a function that checks if digits k apart match.

    >>> match_k(2)(1010)
    True
    >>> match_k(2)(2010)
    False
    >>> match_k(1)(1010)
    False
    >>> match_k(1)(1)
    True
    >>> match_k(1)(2111111111111111)
    False
    >>> match_k(3)(123123)
    True
    >>> match_k(2)(123123)
    False
    """

    def func(x):
        last_k = x // 10**k
        rest = x
        pre = last_k
        while rest // 10**k:
            last_k, rest = rest % 10**k, rest // 10**k
            if pre != last_k:
                return False
        return True

    return func
