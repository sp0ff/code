#include <iostream>
// МАССИВЫ
/*
 * Массив -- блок из нескольких однотипных данных
 * Задавать массивом удобно:
 * - вектора и матрицы
 * - множ-во точек  из 3D и 2D геометрии
 * - числовой ряд, таблица etc.
 * - строка -- массив символов
 * - видеобуфер (2-мерный массив, соответствующий пикселам экрана)
 *
 * тип_данных имя_массива[размер]
 * тип_данных имя_массива[размер] = {значение для всех эл-тов}
 * тип_данных имя_массива[размер] = {значение1, значение2, значение3}
 * тип_данных имя_массива[размер1(строка)][размер2(столбец)] =
 * {{a11, a12, a13},
 *  {a21, a22, a23},
 *  {a31, a32, a33}}
 * Нулевой массив int a[3][3] = {{0}}
 * Обращение к элементам массива:
 * имя_массива[индекс]
 * имя_массива[строка][столбец]
*/

int main()
{
    // initialization of matrices:
    int matrix1[3][3] = {{0, 1, 1},
                         {2, 3, 5},
                         {8, 13, 21}};
    int matrix2[3][3] = {{34, 55, 89},
                         {144, 233, 377},
                         {610, 987, 1597}};
    int matrix3[3][3] = {{0}};

    // pseudo multiplication (elementwise):
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
    }
    std::cout << "The multipliers are stored in the program (see the source code)\n\n\n"
                 "(1) Pseudo (elementwise) multiplication of the two 3x3 matrices\n\n"
                 "Resulting 3x3 matrix:\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << '\t' << matrix3[i][j];
        std::cout << std::endl;
    }
    std::cout << "\n\n\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            matrix3[i][j] = 0;
    }

    // real multiplication:
    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    std::cout << "(2) Real multiplication of the two 3x3 matrices\n\n"
                 "Resulting 3x3 matrix:\n\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << '\t' << matrix3[i][j];
        std::cout << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
