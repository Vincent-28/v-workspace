#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    using namespace second;

    std::cout << x; //2

    return 0;

}