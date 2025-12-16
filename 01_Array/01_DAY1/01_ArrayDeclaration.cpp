#include <iostream>
using namespace std;

int main()
{
    //*  Array Declaration
    //? Note : we have to Always have to Define the size of the Array
    int integers[5];

    //? The size of the array is determined automatically based on the number of elements provided in the initializer list
    int arr[] = {1, 2, 3, 4};

    //* Address of Array
    cout << "Address of Array : " << integers << endl;
    cout << "Address of first element : " << &integers[0] << endl;
    cout << "Address of Array : " << &integers << endl;

    //* Types of Array Defination in C++
    int numbers[5] = {1, 2, 3, 4, 5};
    bool booleans[5] = {true, false, true, false, true};
    char characters[5] = {'a', 'b', 'c', 'd', 'e'};

    //* Defines all five elements with 'a' Value
    int alphabets[5] = {'a'};

    //* Bad Practice
    int n;
    cin >> n;
    int integer[n];

    int num[] = {1, 2, 3, 4, 5};

    //* Accessing Elements Based on Indexs
    cout << "First Element : " << num[0] << endl;
    cout << "Second Element : " << num[1] << endl;
    cout << "Third Element : " << num[2] << endl;
    cout << "Fourth Element : " << num[3] << endl;
    cout << "Fifth Element : " << num[4] << endl;

    return 0;
}