#include <iostream>
using namespace std;

//? Make all Elements as 1

int main()
{
    int arr[5];
    fill_n(arr, 5, 1);
    int size = 5;

    for (int index = 0; index < size; index++)
    {
        cout << "Element at index " << index << " : " << arr[index] << endl;
    }

    for (int index = 0; index < size; index++)
    {
        arr[index] = 2;
    }

    for (int index = 0; index < size; index++)
    {
        cout << "Element at index " << index << " : " << arr[index] << endl;
    }

    return 0;
}