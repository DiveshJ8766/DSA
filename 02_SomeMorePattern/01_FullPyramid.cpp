#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Number : ";
    cin >> n;

    cout << "\n\n ------------------- First Solution : ---------------\n\n";

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (j < (n - i - 1))
            {
                cout << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << "\n\n ------------------- Second Solution : ---------------\n\n";

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < (n - i - 1); j++)
        {

            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}