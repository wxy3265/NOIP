#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k[n], s[n];
    int i;
    for (i = 0; i< n; i++) {
        cin >> k[i] >> s[i];
    }
    
    int max;
    int maxnum, maxnum2, minnum;
    int j;
    int change;
    bool flag = false;
    for (i = 0; i < n; i++) {
        max = s[i];
        flag = false;
        for (j = i + 1; j < n; j++){
            if (s[j] > max) {
                maxnum = j;
                max = s[j];
                flag = true;
            }
            if (s[j] == s[i] && k[j] < k[i]) {
                if (s[i] > s[j]) {
                    maxnum2 = i;
                    minnum = j;
                } else {
                    maxnum2 = j;
                    minnum = i;
                }
                change = s[minnum];
                s[minnum] = s[maxnum2];
                s[maxnum2] = change;
                change = k[minnum];
                k[minnum] = k[maxnum2];
                k[maxnum2] = change;
            }
        }
        if (flag) {
            change = s[i];
            s[i] = s[maxnum];
            s[maxnum] = change;
            change = k[i];
            k[i] = k[maxnum];
            k[maxnum] = change;
            for (j = i + 1; j < n; j++) {
                if (s[j] == s[i] && k[j] < k[i]) {
                    if (s[i] > s[j]) {
                        maxnum2 = i;
                        minnum = j;
                    } else {
                        maxnum2 = j;
                        minnum = i;
                    }
                    change = s[minnum];
                    s[minnum] = s[maxnum2];
                    s[maxnum2] = change;
                    change = k[minnum];
                    k[minnum] = k[maxnum2];
                    k[maxnum2] = change;
                }
            }
        }
    }

    int scoreLine = (int)(m * 1.5);
    bool flag2 = false;
    for (i = scoreLine; i < n && s[i] == s[scoreLine - 1]; i++) {
        scoreLine++;
        flag2 = true;
    }
    int scoreLine2 = scoreLine - 1;
    
    cout << s[scoreLine2] << " " << scoreLine << endl;
    for (i = 0; i < scoreLine; i++) {
        cout << k[i] << " " << s[i] << endl;
    }

    return 0;
}

