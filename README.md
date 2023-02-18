# Learning c++
This repository contains all my project that I created during learning c++

## Characteristics of good solutions
* They are straightforward (not overly complicated or confusing).
* They are well documented (especially around any assumptions being made or limitations).
* They are built modularly, so parts can be reused or changed later without impacting other parts of the program.
* They are robust, and can recover or give useful error messages when something unexpected happens.
![development process](/resources/img/development-process.png)

## What does the compiler do?
1. It checks if the code follows the rules and throughs an error if not 
2. It translates the source code into machine language files (object file). Object files have the file extension .o or .obj. Their name is the same as the .cpp file
![compiler](/resources/img/compiler.png)

# What does the linker do?
1. Creates an executable from the object files 
2. Links library files
3. Resolves all cross-file dependencies
![linker](/resources/img/linker.png)

! Use Makefiles for building programs

## C++ standard drafts
https://www.open-std.org/jtc1/sc22/wg21/docs/standards

# Structure of a program
* sequence of instructions
* statement = type of instruction

## Comments 
* At the library, program, or function level, use comments to describe what.
* Inside the library, program, or function, use comments to describe how.
* At the statement level, use comments to describe why.

## Objects and variables
In C++, we use variables to access memory. Variables have an identifier, a type, and a value (and some other attributes that aren’t relevant here). A variable’s type is used to determine how the value in memory should be interpreted.