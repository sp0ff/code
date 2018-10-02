#include <climits>
#include <iostream>
// Lab 1
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


// Table of sizes and min/max values of basic C++ data types

    char separator[] = "+-----------------------+---------------+------------"
                        "-------------------+-------------------------------+\n";
    std::cout << "\t\t\t\t\t      C++ DATA TYPES\n";
    std::cout << separator;
    std::cout << "|\tTYPE\t\t|\tSIZE\t|\tMIN\t\t\t|\tMAX\t\t\t|\n";
    std::cout << separator;
    std::cout << "|\tchar\t\t|\t" << sizeof (char) << "\t|\t" << CHAR_MIN
              << "\t\t\t|\t" << CHAR_MAX << "\t\t\t|\n";
    std::cout << separator;
    std::cout << "|\tbool\t\t|\t" << sizeof (bool)
              << "\t|\t0\t\t\t|\t1        \t\t|\n";
    std::cout << separator;
    std::cout << "|\tint\t\t|\t" << sizeof (int) << "\t|\t" << INT_MIN
              << "\t\t|\t" << INT_MAX << "\t\t|\n";
    std::cout << separator;
    std::cout << "|\tshort\t\t|\t" << sizeof (short) << "\t|\t" << SHRT_MIN
              << "\t\t\t|\t" << SHRT_MAX << "\t\t\t|\n";
    std::cout << separator;
    std::cout << "|\tlong\t\t|\t" << sizeof (long) << "\t|\t" << LONG_MIN
              << "\t|\t" << LONG_MAX << "\t|\n";
    std::cout << separator;
    std::cout << "|\tlong long\t|\t" << sizeof (long long) << "\t|\t" << LONG_LONG_MIN
              << "\t|\t" << LONG_LONG_MAX << "\t|\n";
    std::cout << separator;
    std::cout << "|\tdouble\t\t|\t" << sizeof (double) << "\t|\t" << __DBL_MIN__
              << "\t\t|\t" << __DBL_MAX__ << "\t\t|\n";
    std::cout << separator;

    return 0;
}
