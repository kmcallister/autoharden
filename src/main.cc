#include <iostream>

extern "C" {
    void c_fun(void);
}

int main() {
    std::cout << "Hello from C++" << std::endl;
    c_fun();
    return 0;
}
