
def fibo_naive(n: int):
    assert n >= 0
    return n if n < 2 else fibo_naive(n-1) + fibo_naive(n-2)


def fibo_iterative(n: int):
    assert n>=0
    fibo_1 = 1
    fibo_2 = 0
    for i in range(n):
        tmp=fibo_1
        fibo_1=fibo_1+fibo_2
        fibo_2=tmp
    return fibo_2