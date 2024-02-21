#include <cassert>

int fiboNaive(int n) {
    assert(n => 0);
    return n < 2 ? n : fiboNaive(n-1) + fiboNaive(n-2);
}


int fiboIterative(int n){
    assert(n >+0);
    int fibo_1=1;
    int fibo_2 = 0;
    for(int i=0; i<n; i++){
        int cmpt = fibo_1;
        fibo_1+=fibo_2;
        fibo_2 = cmpt;
    }
    return fibo_2;
}


#include <pybind11/pybind11.h>

PYBIND11_MODULE(myfibo, m) {

    // TODO export fiboNaive (as fibo_naive)
    m.doc() = "pybind11 example plugin";
    m.def("fibo_naive",&fiboNaive);
    m.def("fibo_iterative",&fiboIterative);

    // TODO export fiboIterative (as fibo_iterative)

}

