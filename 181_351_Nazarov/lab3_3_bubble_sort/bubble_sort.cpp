#include <iostream>
// Lab 3 (task 3)
int main()
{
// Bubble sort of an initialized int array

    int num_array[10] = {3, 1, 0, 1, 13, 5, 34, 21, 8, 2};
    int n = 10;
    int tmp; // buffer

    std::cout << "Initial array:\t";
    for (int i = 0; i < n; ++i)
        std::cout << " " << num_array[i];
    std::cout << "\n";

    for (int i = 0; i < n-1 ; ++i)
    {
        for (int j = 0; j < n-i-1; ++j)
        {
            if (num_array[j] > num_array[j+1])
            {
                tmp = num_array[j];
                num_array[j] = num_array [j+1];
                num_array [j+1] = tmp;
            }
        }
    }

    std::cout << "Sorted array:\t";
    for (int i = 0; i < n; ++i) std::cout << " " << num_array[i];
    std::cout << "\n";

    return 0;
}
