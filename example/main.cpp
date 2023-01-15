#include <iostream>
#include <flow/threads.hpp>

int main() {
    std::cout << flow::threads::available() << std::endl;
    std::cout << flow::threads::concurrent_available() << std::endl;
    std::cout << flow::threads::optimal(5) << std::endl;
    std::cout << flow::threads::concurrent_optimal(5) << std::endl;

    return 0;
}
