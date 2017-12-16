#include <iostream>

using namespace std;

void change(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min, minnum;
    int j;
    bool flag = false;
    for (i = 0; i < n; i++) {
        min = a[i];
        flag = false;
        for (j = i + 1; j < n; j++) {
            if (a[j] < min) {
                min = a[j];
                minnum = j;
                flag = true;
            }
        }
        if (flag) {
            change(&a[i], &a[minnum]);
        }
    }

    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

