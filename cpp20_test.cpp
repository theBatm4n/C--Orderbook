#include <iostream>
#include <format>
#include <vector>
#include <ranges>

int main() {
    // C++20 std::format (replaces printf/sstream)
    std::string message = std::format("Hello C++20 from {}!", "WSL");
    std::cout << message << std::endl;
    
    // C++20 ranges
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    auto even_numbers = numbers | std::views::filter([](int n) { return n % 2 == 0; });
    
    std::cout << "Even numbers: ";
    for (int n : even_numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
    // C++20 concepts check (compile-time)
    std::cout << "C++20 compilation successful!" << std::endl;
    
    return 0;
}
