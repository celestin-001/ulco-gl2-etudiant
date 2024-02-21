import mypackage.myfibo as myfibo

if __name__ == '__main__':

    print('TODO')
    
    for i in range(11):
        print("fibo_naive("+str(i)+") = "+ str(myfibo.fibo_naive(i)))

    # TODO print fibo_iterative(i) for i from 0 to 10

    for i in range(11):
        print("fibo_iterative("+str(i)+") = "+ str(myfibo.fibo_iterative(i)))