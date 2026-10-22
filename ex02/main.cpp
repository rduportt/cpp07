#include "Array.hpp"

int main()
{
    try
    {
        Array<int> intArray(5);
        int fillint[] = {1, 2, 3, 4, 5};

        std::cout << intArray[2] << std::endl;
        intArray.fillArray(intArray, fillint, 5);
        std::cout << intArray[3] << std::endl; 
        std::cout << intArray[7] << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<char> charArray(5);
        char fillchar[] = {'a', 'b', 'c', 'd', 'e'};
        std::cout << charArray[2] << std::endl;
        charArray.fillArray(charArray, fillchar, 5);
        std::cout << charArray[3] << std::endl; 
        std::cout << charArray[7] << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<std::string> stringArray(5);
        std::string fillstring[] = {"abc", "def", "hij", "klm", "nop"};
        std::cout << stringArray[2] << std::endl;
        stringArray.fillArray(stringArray, fillstring, 5);
        std::cout << stringArray[3] << std::endl; 
        std::cout << stringArray[7] << std::endl; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Array<int> zeroArray;
        std::cout << zeroArray[0] << std::endl;
        std::cout << zeroArray[2] << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}