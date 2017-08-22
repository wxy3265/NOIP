#include <iostream>

using namespace std;

int main()
{

    int n;
    int max = 0, in = 0, min = 0;
    int i;

    cin >> n;

    for (i=0;i<n;i++) {

        cin >> in;
        if (in > max || i == 0)
            max = in;
        if (in < min || i == 0)
            min = in;

    }

    //cout << max << endl << min << endl;
    cout << max - min;

    return 0;
}

