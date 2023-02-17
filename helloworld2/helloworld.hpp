#include <iostream>
#include <string>
#include <array>

namespace hello
{
    auto hello_world(std::array<std::string, 4> value) -> void
    {
        for (size_t i = 0; i < value.size(); i++)
        {
            std::cout << value[i] << " ";
        }
    }
}