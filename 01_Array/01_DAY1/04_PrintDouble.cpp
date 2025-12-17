#include <iostream>
using namespace std;

void printElements(int arr[], int size)
{
    cout << "Array Elements : ";
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = 5;

    for (int index = 0; index < size; index++)
        arr[index] = arr[index] * 2;

    printElements(arr, size);

    return 0;
}