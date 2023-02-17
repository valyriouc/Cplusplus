#include<iostream>
#include<array>
#include<string>

int main(int argc, char const *argv[])
{
    std::array<std::string, 4> arr = {"Hello", "world", "from", "c++"};

    for (size_t i = 0; i < arr.size(); i++)
    {
        /* code */
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
