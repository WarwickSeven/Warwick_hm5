#include <iostream>

using std::cout;
using std::endl;

// домашнее задание 5-1

bool PrintArray(double arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return true;
}
int main()
{
    const int mysize = 5;
    double myarr[] = { 2.25, 3.35, 4.45, 5.55, 6.65 };
    
    if (PrintArray(myarr, mysize))
    {
        cout << "Array was sucesfully printed" << endl;
    }
    return 0;
}
