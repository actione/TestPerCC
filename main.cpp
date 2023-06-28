#include <iostream>
#include "test.h"

void helloword()
{
    std::cout << "hello world!" << std::endl;
}

void again()
{
    std::cout << "hello world!" << std::endl;
}

int main()
{
    int arr[5] = {3, 1, 2, 5, 4};
    quickSort(arr, 0, 4);
    for(int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    testNeg();
    return 0;
}
