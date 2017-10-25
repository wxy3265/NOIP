#include <iostream>

using namespace std;

void change(int* a, int* b);

int main()
{

    int n;
    cin >> n;
    int id[n], chinese[n], math[n], english[n], score[n];

    int i;
    for (i = 0; i < n; i++) {
        id[i] = i + 1;
        cin >> chinese[i] >> math[i] >> english[i];
        score[i] = chinese[i] + math[i] + english[i];
    }

    int max = score[0], maxnum, max1;
    int j;
    bool flag = false, flag1 = false;

    for (i = 0; i < n; i++) {
        //cout << "~ i :" << i << endl;
        max = score[i];
        flag = false;
        flag1 = false;

        for (j = i + 1; j < n; j++) {
            if (score[j] > max) {
                max = score[j];
                maxnum = j;
                flag = true;
            }
        }
        
        if (flag) {
            change(&chinese[maxnum], &chinese[i]);
            change(&score[maxnum], &score[i]);
            change(&id[maxnum], &id[i]);
        }

        max = chinese[i];
        max1 = id[i];

        for (j = i + 1; j < n; j++) {
            if (score[j] == score[i] && (chinese[j] > max || (chinese[j] == max && id[j] < max1))) {
                flag1 = true;
                maxnum = j;
                max1 = id[j];
                max = chinese[j];
            }
        }

        if (flag1) {
            change(&chinese[maxnum], &chinese[i]);
            change(&score[maxnum], &score[i]);
            change(&id[maxnum], &id[i]);
        }

    }

    for (i = 0; i < 5; i++) {
        cout << id[i] << " " << score[i] << endl;
    }

    return 0;
}

void change(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

