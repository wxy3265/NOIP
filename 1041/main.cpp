#include <iostream>
#include <string>
#include <memory.h>
#include <math.h>

using namespace std;

void BubbleSort(int *a[], int n);
void BucketSort(int *a, int n, int max);
void InputLinearArray(int *a);
void OutputLinearArray(int *a);

int main()
{

    int n;
    int m;
    cin >> n >> m;
    m *= 1.5;
    int score_top[2][n];

    int i;

    for (i = 0; i < n; i++) {
        cin >> score_top[0][i]
            >> score_top[1][i];
    }

    BubbleSort(score_top, n);

    int pass;
    pass = score_top[0][m];

    cout << pass << m;

    for (i = 0; i < m; i++) {
        cout << score_top[0][m] << score_top[1][m] << endl;
    }

    return 0;
}

void BubbleSort(int *a[], int n)
{

    int i, j;
    int b, c;
    bool change = false;

    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (a[j] < a[j -1]) {
                b = a[0][j];
                c = a[1][j];
                a[0][j] = a[0][j - 1];
                a[1][j] = a[1][j - 1];
                a[0][j - 1] = b;
                a[1][j - 1] = c;
                change = true;
            }
        }
        if(!change)
            break;
        change = false;
    }

    return ;
}

void BucketSort(int a[], int n, int max)
{
    int b[max + 1];
    int input_where = 0;

    memset(b, 0, max);

    int i, j;

    for (i = 0; i < n; i++)
        b[a[i]]++;

    for (i = 1; i <= max; i++) {
        for (j = 0; b[j + 1] != 0; b[j + 1] -= j + 1, j++);
        if (j != 0) {
            a[input_where] = j;
            input_where ++;
        }
    }

    return ;
}

void InputLinearArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    return ;
}

void OutputLinearArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i];
    return ;
}

