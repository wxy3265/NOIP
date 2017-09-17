#include <iostream>

using namespace std;

int main()
{

    string a;
    int m = 0, n = 0, min = 200;
    int mins = 0, mine = 0, minl = 0;

    cin >> a;
    cout << a;

    /*while (1) {
        if (a[n] == '.') {
            if (m < min) {
               min = m;
               mine = n;
            }
            m =  0;
            
            break;
        }
        else if (a[n] == ' ') {
            if (m < min) {
                min = m;
                mine = n - 1;
                mins = minl;
             }
             m =  0;
             minl = n + 1;
        }
        m++;
        n++;
    }

    int i;

    for (i = mins; i <= mine; i++) {
        cout  << a[i];
    }

    cout << endl << n << endl;*/

    return 0;
}

