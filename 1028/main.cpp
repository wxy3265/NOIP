#include <iostream>

using namespace std;

int main()
{

    string a;
    cin >> a;

    int i;

    for (i = 0; i < a.size(); i++) {
        if (!(a[i] <= 'A' || a[i] >= 'z')) {
            if ((a[i] >= 'A' && a[i] < 'X') || (a[i] >= 'a' && a[i] <= 'x')) {
                a[i] += 3;
            } else {
                a[i] -= 23;
            }
        }
    }
    
    cout << a;

    return 0;
}

