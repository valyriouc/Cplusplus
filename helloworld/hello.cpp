#include<iostream>

/*
Sometimes we have to build multi-file projects and it will break the default build-functionality in tasks.json in VSC. In some cases this can be solved by changing:

${file},

to

"${workspaceFolder}/*.c",

Later you may want to update msys2. To do this, open “msys2 mingw64” and type

pacman -Suy

*/

int main(int argc, char const *argv[])
{
    std::cout << "Hello world" << std::endl;
    return 0;
}
