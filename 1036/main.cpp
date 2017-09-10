#include <iostream>

using namespace std;

int main()
{

    int n;
    bool flag = true;
    cin >> n;

    do {
        if (n == 0 || n == 1)
            flag = false;
        cout << "shang:" << n / 2 << " " << "yu:" << n % 2 << endl;
        n /= 2;
    }
    while ((n != 0 && n != 1) || flag);

    return 0;
}

