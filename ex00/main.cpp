#include "whatever.hpp"

int main()
{
    std::cout << std::endl << "Main de l'exo" << std::endl << std::endl;
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << std::endl << "Main perso" << std::endl << std::endl;
    int x = -1;
    int y = -2;
    std::cout << "x = " << x << std::endl << "y = " << y << std::endl << std::endl;
    std::cout << "max :" << ::max(x, y) << std::endl;
    std::cout << "min :" << ::min(x, y) << std::endl << std::endl;
    ::swap(x, y);
    std::cout << "x = " << x << std::endl << "y = " << y << std::endl << std::endl;

    float i = 1.5;
    float j = 3.5;
    std::cout << "i = " << i << std::endl << "j = " << j << std::endl << std::endl;
    std::cout << "max :" << ::max(i, j) << std::endl;
    std::cout << "min :" << ::min(i, j) << std::endl << std::endl;
    ::swap(i, j);
    std::cout << "i = " << i << std::endl << "j = " << j << std::endl << std::endl;

    char k = 'k';
    char l = 'l';
    std::cout << "k = " << k << std::endl << "l = " << l << std::endl << std::endl;
    std::cout << "max :" << ::max(k, l) << std::endl;
    std::cout << "min :" << ::min(k, l) << std::endl << std::endl;
    ::swap(k, l);
    std::cout << "k = " << k << std::endl << "l = " << l << std::endl << std::endl;

    std::string m = "chaine1";
    std::string n = "chaine2";
    std::cout << "m = " << m << std::endl << "n = " << n << std::endl << std::endl;
    std::cout << "max :" << ::max(m, n) << std::endl;
    std::cout << "min :" << ::min(m, n) << std::endl << std::endl;
    ::swap(m, n);
    std::cout << "m = " << m << std::endl << "n = " << n << std::endl;
}