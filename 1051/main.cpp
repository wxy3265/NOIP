#include <iostream>

using namespace std;

void change(float *a, float *b) 
{
    float c;
    c = *a;
    *a = *b;
    *b = c;
    return ;
}

int main()
{

    int n;
    cin >> n;
    string sex;
    float statureM[n], statureW[n];

    int i, j = 0, k = 0;
    for (i = 0; i < n; i++) {
        cin >> sex;
        if (sex[0] == 'm') {
            cin >> statureM[j];
            j++;
        } else {
            cin >> statureW[k];
            k++;
        }
    }

    int mlen = j, wlen = k;

    float max;
    float min;
    int maxnum, minnum;
    bool flag = false;
    for (i = 0; i < n; i++) {
        min = statureM[i];
        minnum = i;
        flag = false;
        for (j = i + 1; j < n; j++) {
            if (statureM[j] > min) {
                min = statureM[i];
                minnum = j;
                flag = true;
            }
        }
        if (flag) {
            change(&statureM[i], &statureM[minnum]);
        }
    }
    for (i = 0; i < n; i++) {
        max = statureW[i];
        maxnum = i;
        flag = false;
        for (j = i + 1; j < n; j++) {
            if (statureW[j] > max) {
                max = statureW[i];
                maxnum = j;
                flag = true;
            }
        }
        if (flag) {
            change(&statureW[i], &statureW[maxnum]);
        }
    }

    for (i = 0; i < mlen; i++) {
        cout << statureM[i] << " ";
    }
    for (i = 0; i < wlen; i++) {
        cout << statureW[i] << " ";
    }

    return 0;
}

