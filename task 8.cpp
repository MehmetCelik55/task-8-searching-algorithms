#include <iostream>
#include <vector>
#include "Searching.h"

int main() {
    std::vector<int> a = { 2,4,7,9,12,15,15,15,15,15,29,70,80,80 };

    int result1 = binarySearchFirst(a, 15);
    std::cout << "First occurrence of 15: " << result1 << std::endl;

    int result2 = binarySearchFirst(a, 80);
    std::cout << "First occurrence of 80: " << result2 << std::endl;

    int result3 = binarySearchFirst(a, 100);
    std::cout << "First occurrence of 100: " << result3 << std::endl;

    return 0;
}