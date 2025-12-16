#include <iostream>
using namespace std;

//? Note : when Passing Array to function  reference is Passed , address of First Element is Passed
void printElements(int arr[], int size)
{
    cout << "Elements of an Array : ";
    for (int index = 0; index < size; index++)
    {
        cout << arr[index] << " ";
    }
    cout << endl;
}

//? Note : Here we are passing pointer to the Function
void incrementArrayValues(int *arr, int size)
{
    for (int index = 0; index < size; index++)
    {
        arr[index] = arr[index] + 20;
    }
}

int main()
{
    int arr[100];

    int size;
    cout << "Enter the size of the Array : ";
    cin >> size;

    for (int index = 0; index < size; index++)
    {
        cin >> arr[index];
    }

    printElements(arr, size);

    cout << "Before Increment Address of Array : " << &arr << endl;

    //? This Increases the values of orginal array as reference is passed
    incrementArrayValues(arr, size);

    cout << "After Increment Address of Array : " << &arr << endl;

    printElements(arr, size);

    return 0;
}