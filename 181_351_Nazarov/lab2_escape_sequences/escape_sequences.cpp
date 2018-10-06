#include <iostream>
// Lab 2
int main()
{
// List of escape sequences

    std::cout << "Hello, world!\n";         // newline
    std::cout << "Hello, world!\t\n";       // horisontal tab
    std::cout << "Hello, world!\v\n";       // vertical tab
    std::cout << "Hello, world!\b\n";       // backspace
    std::cout << "Hello, world!\r\n";       // carriage return
    std::cout << "Hello, world!\f\n";       // form feed
    std::cout << "Hello, world!\a\n";       // alert
    std::cout << "Hello, world!\\\n";       // backslash
    std::cout << "Hello, world!\?\n";       // question mark
    std::cout << "Hello, world!\'\n";       // single quote
    std::cout << "Hello, world!\"\n";       // double quote
    std::cout << "Hello, world!\036\n";     // octal number
    std::cout << "Hello, world!\x0ff\n";    // hex number

    return 0;
}
