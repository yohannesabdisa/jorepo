#include <iostream>
#include <iomanip>
using namespace std;
void Accept_Names();
void Accept_Marks();
void Totals_Averages();
void Table_Print();
void Neat_Lines_Header();
void Neat_Lines();
char names[5][20];
int marks[5][3];
int total[5] = {0};
double average[5] = {0};
int main()
{

    Accept_Names();
    Accept_Marks();
    Totals_Averages();
    Table_Print();
}
void Neat_Lines()
{
    for (int i = 0; i < 54; i++)
    {
        cout << "-";
    }
    cout << endl;
}
void Neat_Lines_Header()
{
    for (int i = 0; i < 54; i++)
    {
        cout << "=";
    }
    cout << endl;
}
void Accept_Names()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter the name of student "
             << i + 1 << ": ";
        cin.getline(names[i], 20);
    }
}
void Accept_Marks()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Please enter  mark of " << names[i] << " for M" << j + 1 << ":";
            cin >> marks[i][j];
        }
        cin.ignore();
    }
}
void Totals_Averages()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total[i] += marks[i][j];
        }
        average[i] = total[i] / 3.0;
    }
}
void Table_Print()
{
    Neat_Lines_Header();
    cout << left << setw(20) << "Name"
         << right << setw(6) << "M1"
         << setw(6) << "M2"
         << setw(6) << "M3"
         << setw(8) << "Total"
         << setw(8) << "Avg." << endl;
    Neat_Lines_Header();

    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(20) << names[i];

        for (int j = 0; j < 3; j++)
        {
            cout << right << setw(6) << marks[i][j];
        }

        cout << setw(8) << total[i]
             << setw(8) << average[i] << endl;
        Neat_Lines();
    }
}