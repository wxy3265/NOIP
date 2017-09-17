#include <iostream>

using namespace std;

int main()
{

    string a;
    int min = 200;
    int l;
    string mins;

    while (1) {

        cin >> a;
        //cout << "~~" << a << endl;
        l = a.size();

        if (a[l - 1] == '.') {

            if (l - 1 < min) {
               int i;
               for (i = 0; i < l - 1; i++)
                   cout << a[i];
            } else {
                cout << mins;
            }

            break;

        } else {
            if (l < min) {
                min = l;
                mins = a;
            }
        }
    }

    return 0;
}

