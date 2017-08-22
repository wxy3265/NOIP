#include <iostream>

using namespace std;

int main()
{

    int x;
    int i;
    int num = 0;
    int ans;

    cin >> x;

    if ((x - 10) < 0)
        num = 1;
    else if ((x - 100) < 0)
        num = 2;
    else if ((x - 1000) < 0)
        num = 3;
    else
        num = 4;

    cout << num << endl;

    if (num == 1) 
        cout << x;
    else if (num == 2)
        cout << (x - (x % 10)) / 10 << endl
             << x % 10 << endl;
    else if (num == 3)
        cout << (x - (x % 100)) / 100 << endl
             << (x - (x - (x % 100)) - x % 10) / 10 << endl
             << x % 10 << endl;
    else if (num == 4)
        cout << (x - (x % 1000)) / 1000 << endl
             << (x - (x - (x % 1000)) - (x % 100)) /100 << endl
             << (x - (x - (x % 1000)) - (x - (x - (x % 1000)) - (x % 100))  - x % 10) / 10 << endl
             << x % 10 << endl;

    return 0;
}

