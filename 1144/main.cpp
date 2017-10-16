#include <iostream>
#include <fstream>
#define MAX 1001

using namespace std;

fstream fin;

int main()
{

    int n;
    cin >> n;

    int a[MAX], b, i;
    
    for (i = 0; i < MAX; i++) {
        a[i] = 0;
    }

    for (i = 0; i < n; i++) {
        cin >> b;
        a[b]++;
    }

    int max = 0, maxNum;
    for (i = 0; i < MAX; i++) {
        if (a[i] > max) {
            max = a[i];
            maxNum = i;
        }
    }

    cout << maxNum << endl;

    return 0;
}

