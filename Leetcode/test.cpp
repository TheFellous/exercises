#include <bits/stdc++.h>


int main() {
   /* uint32_t x = 0b10101010; // Binary literal for demonstration purposes

    // Get the value of the third bit (counting from 0)
    bool thirdBit = x & (1 << 2);

    // Set the value of the seventh bit to 1
    x |= (1 << 6);

    // Clear the value of the second bit
    x &= ~(1 << 1);

    std::cout << "x: " << x << std::endl;
    std::cout << "Third bit value: " << thirdBit << std::endl;

    return 0;
    */
/*   for(int i = 0; i < 5; i++)
   {
        std::string test; 
        std::cout << "Teste: " << test; 
        for(int j = 0; j < 5; j++)
            test += 'i'; 

   }
   */
    int x = 10;

    // Referencing: Create a reference to x
    int& ref = x;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    // Change the value of x through the reference
    ref = 20;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value of ref: " << ref << std::endl;

    // Pointer and Dereferencing
    int* ptr = &x; // ptr now holds the address of x
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl;

    // Dereferencing: Get the value at the address ptr is pointing to
    int val = *ptr;
    std::cout << "Value of val: " << val << std::endl;

    return 0;
}

