#include "common.h"
#if TEST == 1
#include "MMFCppFunctions.hpp"
#include <iostream>

int main()
{
    std::cout << "Hello from main-test" << std::endl;
    test_from_cpp();
    return 0;
}
#endif
