#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    double money = 0;
    cin >> a;
    if (a > 400) {
        printf("%.1f\n", 0.4463 * 150 + 250 * 0.4663 + (a - 400) * 0.5663);
    } else if (a > 150) { 
        printf("%.1f\n", 0.4463 * 150 + 0.4663 * (a - 150));
    } else {
        printf("%.1f\n", 0.4463 * a);
    }
    return 0;
}

