#include<iostream>
using namespace std;

int main()
{
    int rows, i, j, s;
    rows = 4;
    for(i = 1; i <= rows; i++)
    {

        for (s = i; s < rows; s++)
            cout << " ";

        for(j = 1; j <= (2 * rows - 1); j++)
        {
            if(i == rows || j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << "\n";
    }
    return 0;
}