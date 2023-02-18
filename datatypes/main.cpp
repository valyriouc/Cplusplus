#include<iostream>
#include<cmath>

int main(int argc, char const *argv[])
{
    short svar {200};
    int ivar {400};
    long lvar {LONG_MAX};
    long long llvar {LLONG_MAX};

    std::cout << svar << std::endl;
    std::cout << ivar << std::endl;
    std::cout << lvar << std::endl;
    std::cout << llvar << std::endl;

    std::cout << "Size of short: " << sizeof(short) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << std::endl;
    
    bool bvar1 {true};
    bool bvar2 {false};
    bool bvar3 {bvar1 && bvar2};
    bool bvar4 {bvar1 || bvar2};
    bool bvar5 {bvar1 == bvar2};
    bool bvar6 {bvar1 != bvar2};

    std::cout << bvar1 << std::endl;    // true
    std::cout << bvar2 << std::endl;    // false
    std::cout << bvar3 << std::endl;    // false
    std::cout << bvar4 << std::endl;    // true 
    std::cout << bvar5 << std::endl;    // false
    std::cout << bvar6 << std::endl;    // true
    std::cout << "Size of bool: " << sizeof(bool) << std::endl;

    bool bvar7 {true};
    std::cout << bvar7 << std::endl;

    float fvar1 {4.3};
    double dvar1 {17.2};
    long double dvar2 { 34.2 };

    std::cout << fvar1 << std::endl;
    std::cout << dvar1 << std::endl;
    std::cout << dvar2 << std::endl;

    char cvar1 {'A'};
    char cvar2 {65};
    char cvar3 {35};

    std::cout << cvar1 << std::endl;
    std::cout << cvar2 << std::endl;
    std::cout << cvar3 << std::endl;

    for (size_t i = 0; i < 255; i++)
    {
        std::cout << static_cast<char>(i) << " "; 
    }
    
    return 0;
}
