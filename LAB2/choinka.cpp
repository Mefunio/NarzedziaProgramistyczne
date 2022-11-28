#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int space, rows, i, k;

    cout <<"Wprowadź liczbę wierszy: ";
    cin >> rows;

    for(i = 1; i <= rows-1; ++i) {
        for (space = 1; space <= rows - i; ++space) {
            cout << "  ";
        }
        k = 0;
        while (k != 2 * i - 1) {
            cout << "* ";
            ++k;
        }
        cout << endl;

    }

    for (int o = 1; o<rows; o++){

        cout << "  ";

    }

    cout << "*";



    return 0;
}