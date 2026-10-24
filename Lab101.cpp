#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    int numbers[5] = {23, 45, 22, 4, 65};
    for (int i = 0; i <= 5; i++)
    {
        cout << "number[" << i << "]=" << numbers[i] << endl;
    }

    return 0;
}
