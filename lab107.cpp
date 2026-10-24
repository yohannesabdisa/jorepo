// TRanspose
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A[3][2] = {{23, 45}, {22, 4}, {65, 76}};
    int T[2][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            T[j][i] = A[i][j];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << setw(4) << T[i][j];
        cout << endl;
    }
}