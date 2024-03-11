#include <fstream>
#include <functional>
#include <iostream>

int add3(int n) {
    return n+3;
}

int mul2(int n) {
    return n*2;
}

int mycompute(int v0) {
    std::cout << "add3 " + std::to_string(v0) << std::endl;
    const int v1 = add3(v0);
    std::cout << "mul2 " + std::to_string(v1) << std::endl;
    const int v2 = add3(v1);
    return v2;
}

int mycomputeFile(int v0) {
    std::ofstream ofs("log.txt",std::ofstream::out);
    ofs << "add3 " + std::to_string(v0) << std::endl;
    const int v1 = add3(v0);
    ofs << "mul2 " + std::to_string(v1) << std::endl;
    const int v2 = add3(v1);
    ofs.close();
    return v2;
}



int main() {
    std::cout << "this is log-cpp" << std::endl;

    const int res = mycompute(18);
    std::cout << res << std::endl;

    const int resF = mycomputeFile(18);
    std::cout << resF << std::endl;

    return 0;
}


