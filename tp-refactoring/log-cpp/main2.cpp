#include <fstream>
#include <functional>
#include <iostream>

using logFunc_t = std::function<void(const std::string &)>;

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}

int mycomputeFile(logFunc_t logF,int v0) {
    
    logF("add3 " + std::to_string(v0) + "\n");
    const int v1 = add3(v0);
    logF("mul2 " + std::to_string(v1)+ "\n");
    const int v2 = add3(v1);
    return v2;
}

void f1(const std::string & str){
    std::cout<<str;
}

int main() {
    std::cout << "this is log-cpp" << std::endl;

    logFunc_t f1 = [](const std::string & str){
        std::cout<<str;
    };

    int res = mycomputeFile(f1, 18);
    std::cout<< res <<std::endl;

    std::ofstream ofs("log2F.txt");
    logFunc_t f2 = [&ofs](const std::string & str){
        ofs <<str;
    };

    int res2 = mycomputeFile(f2, 18);
    std::cout<< res2 <<std::endl;




    return 0;
}

