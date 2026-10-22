#include "iter.hpp"

int main()
{
    //not const
    std::cout << "Not const \n";
    int intarray[] = {1, 2, 3, 4, 5};
    iter<int>(intarray, 5, increment);
    for(int i = 0; i < 5; i++)
        std::cout << intarray[i] << " ";
    std::cout << std::endl;
    char chararray[] = "abcde";
    iter<char>(chararray, 5, increment);
    for(int i = 0; i < 5; i++)
        std::cout << chararray[i] << " ";
    std::cout << std::endl;
    float floatarray[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    iter<float>(floatarray, 5, increment);
    for(int i = 0; i < 5; i++)
        std::cout << floatarray[i] << " ";

    //const
    std::cout << "\nConst \n";
    const int constintarray[] = {1, 2, 3, 4, 5};
    iter<int>(constintarray, 5, print);
    std::cout << std::endl;
    const char constchararray[] = "abcde";
    iter<char>(constchararray, 5, print);
    std::cout << std::endl;
    const float constfloatarray[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    iter<float>(constfloatarray, 5, print);
    std::cout << std::endl;
}

