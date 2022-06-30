#include <stdio.h>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    char c;
    cout << "Enter Number : ";
    cin >> n;

    fstream f1("atul.txt", ios::out);
    f1 << n;
    f1.close();

    fstream f2("atul.txt", ios::in);
    f2 >> c;
    cout << c << "@@";
    while (f2)
    {
        f2 >> c;
    }
    cout << c;
    f2.close();

    return 0;
}