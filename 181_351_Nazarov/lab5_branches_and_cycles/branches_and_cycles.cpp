// Операторы переходов и циклов.
#include <iostream>

// int * input_array() {
// int arr[10] = {0};
// for (int i = 0; i < 10; i++) {
//      std::cin >> arr[i];
// }
// return arr;
// }

int arr_int[10] = { 0 };
void input_array(int * arr){
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
}
int func(int *num1, int num2);
int main()
{
   /* if - оператор условного перехода
    if(лог_усл)
    {
        код, выполняемый если(лог_усл == true)
    }
    if(лог_усл)
    {
        код, выполняемый если(лог_усл == true)
    }
    else
    {
         код выполняемый в противном случае
    }
    Примеры:
    if (a > b){... ;
    bool c = ... ;
    bool d = ... ;
    if (c && d) {...
   */
    /* int * temp = input_array();
    for (int i = 0; i < 10; i++) {
        std::cout  << std::endl;
    }
    */
    /* input_array(arr_int);
    for (int i = 0; i < 10; i++) {
        std::cout << arr_int[i];
    } */

    int num1 = 1, num2 = 2, res = 0;
    res = func(&num1, num2);
    std::cout << res << " " << num1 << " " << num2;
}

int func(int *num1, int num2) {
    *num1 += 10;
    return *num1 + num2;
}
