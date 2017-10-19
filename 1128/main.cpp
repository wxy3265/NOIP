#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    string op;
    string in;
    
    int count = 0;
    while(1) {
        cin >> in;
        if (in[0] == '+' || in[0] == '-') {
            op += in + " ";
            count++;
        } else {
            break;
        }
    }

    int a[count];
    int i;
    for (i = 0; i < count; i++) {
        cin >> a[i];
    }

    cout << in << ' ';
    for (i = 0; i < count; i++) {
        cout << a[i] << ' ';
    }
    cout << op << endl;

    return 0;
}

