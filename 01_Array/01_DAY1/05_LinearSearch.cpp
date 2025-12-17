#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int element)
{
    for (int index = 0; index < size; index++)
    {
        if (arr[index] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {12, 32, 45, 63, 7};
    int size = 5;
    int element = 5;

    if (isPresent(arr, size, element))
    {
        cout << "Element is Present in Array!!" << endl;
    }
    else
    {
        cout << "Element is Not Present in Array!!" << endl;
    }

    return 0;
}