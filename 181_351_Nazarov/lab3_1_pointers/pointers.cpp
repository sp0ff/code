#include <iostream>
// Lab 3 (task 1)
int main()
{
// table of sizes of pointers in C++

    char separator[] = "+---------------+---------------+\n";
    std::cout << separator;
    std::cout << "|\tTYPE\t|  POINTER SIZE |\n";
    std::cout << separator;
    std::cout << "|\tint\t|\t" << sizeof (int *) << "\t|\n";
    std::cout << separator;
    std::cout << "|\tdouble\t|\t" << sizeof (double *) << "\t|\n";
    std::cout << separator;
    std::cout << "|\tchar\t|\t" << sizeof (char *) << "\t|\n";
    std::cout << separator;
    std::cout << "|\tlong\t|\t" << sizeof (long *) << "\t|\n";
    std::cout << separator;
    std::cout << "|\tbool\t|\t" << sizeof (bool *) << "\t|\n";
    std::cout << separator;

    return 0;
}
