#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int score;
    int i;
    float ans;
    int max = 0, min = 100;

    for (i = 0; i < 10; i++) {
        cin >> score;

        if (score > max)
            max = score;
        if (score < min)
            min = score;

        ans += score;
    }
    
    ans -= max + min;

    ans /= 8;
    printf("%1.3f", ans);

    return 0;
}

