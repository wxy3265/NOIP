#include <iostream>

using namespace std;

int main()
{
    const int MAX = 10001;
    string inA, inB;
    int a[MAX], b[MAX];
    int ans[MAX];

    cin >> inA >> inB;

    int i;
    const int aLen = inA.size(), bLen = inB.size();
    
    for (i = 0; i < aLen; i++) {
        a[i] = inA[aLen - 1 - i] - '0';
    }
    for (i = 0; i < bLen; i++) {
        b[i] = inB[bLen - 1 - i] - '0';
    }

    int carry = 0;
    for (i = 0; i < aLen; i++) {
        ans[i] = a[i] + b[i] + carry;
        carry = 0;
        if (ans[i] >= 10) {
            carry = 1;
            ans[i] -= 10;
        }
    }

    for (; i < bLen; i++) {
    	ans[i] = b[i] + carry;
    	carry = 0;
    	if (ans[i] >= 10) {
            carry = 1;
            ans[i] -= 10;
        }
        //ans[i] += b[i] + carry;
        //carry = 0;
    }
	
    for (i -= 1; i >= 0; i--) {
        cout << ans[i];
    }

    cout << endl;
	
    return 0;
}

