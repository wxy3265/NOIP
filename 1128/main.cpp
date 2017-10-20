#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    string num;
    char ops[20];
    string in;
    int tailNum = 0, tailOps = 0;

    do {
        cin >> in;
        if (in[0] == '+' || in[0] =='-') {
            ops[tailOps] = in[0];
            tailOps++;
        } else {
            num += in + ' ';
            tailNum++;
        }
    } while (tailNum != tailOps + 1);

    cout << num;

    int i;
    for (i = 0; i < tailOps; i++) {
        cout << ops[i] << ' ';
    }
    cout << endl;
    return 0;
}

