#include <iostream>


// Greets the user and returns i + 10
int greetUser(int i) {
    std::cout << "Hello, World!" << std::endl;
    return i + 10;
}

int main() {
    int result = greetUser(32);
    std::cout << "Function returned:" << result << std::endl;

    return 0;
} 