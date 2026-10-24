#include <iostream>
#include <iomanip>
using namespace std;
const int ROWS = 3, COLS = 3;
int n[ROWS][COLS];

int main()
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << "Value: ";
            cin >> n[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << setw(4) << n[i][j];
        }
        cout << endl;
    }
    return 0;
}
