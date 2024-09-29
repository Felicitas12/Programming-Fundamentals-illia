/**
* Done by:
 * Student Name: Illia Zhurbenko
 * Student Group: 121
 * Lab 1.6
 */

#include <iostream>


int main() {
    //part 1 ========================
    {
        char letter1 = ':';
        char letter2 = '0';
        char letter3 = 'j';

        constexpr char letter_const1 = ':';
        constexpr char letter_const2 = '0';
        constexpr char letter_const3 = 'j';

        int symbol1 = 0x40;
        int symbol2 = 0x5;
        int symbol3 = 0x53;

        std::cout << "Змінні: " << letter1 << " " << letter2 << " " << letter3 << std::endl;
        std::cout << "Константи: " << letter_const1 << " " << letter_const2 << " " << letter_const3 << std::endl;
        std::cout << "Коди символів: " << symbol1 << " " << symbol2 << " " << symbol3 << std::endl;
    }
    //part 2 ========================
    {
        int intVar = 27652;
        float floatVar = 7.9e3;
        unsigned short ushortVar = 74;

        std::cout << "int: " << intVar << std::endl;
        std::cout << "float: " << floatVar << std::endl;
        std::cout << "unsigned short: " << ushortVar << std::endl;

        double doubleVar = floatVar;
        int intVar2 = static_cast<int>(ushortVar);
        char charVar = reinterpret_cast<char&>(intVar);

        std::cout << "double: " << doubleVar << std::endl;
        std::cout << "int: " << intVar2 << std::endl;
        std::cout << "char: " << charVar << std::endl;
    }
    return 0;
}