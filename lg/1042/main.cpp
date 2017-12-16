#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;

    int i;
    string out;
    int score11 = 0, score21 = 0, score12 = 0, score22 = 0;
    int win1, win2, wins[a.size()];
    for (i = 0; i < a.size(); i++) {
        if (a[i] == 'W') {
            score11++;
            score21++;
        }
    }

    return 0;
}

