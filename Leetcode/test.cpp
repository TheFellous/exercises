#include <iostream>
#include <cstdint>

int main() {
    uint32_t x = 0b10101010; // Binary literal for demonstration purposes

    // Get the value of the third bit (counting from 0)
    bool thirdBit = x & (1 << 2);

    // Set the value of the seventh bit to 1
    x |= (1 << 6);

    // Clear the value of the second bit
    x &= ~(1 << 1);

    std::cout << "x: " << x << std::endl;
    std::cout << "Third bit value: " << thirdBit << std::endl;

    return 0;
}