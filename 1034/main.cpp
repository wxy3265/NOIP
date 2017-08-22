#include <iostream>

using namespace std;

int n;
int allnum = 0;
int ans = 0;
int num;
const int hb[3] = {10, 20, 50};

void dfs(int step);

void dfs(int step)
{
    int i;

    if (allnum == num){
        ans++;
        return ;
    }
    
    else if (allnum > num)
        return ;

    for (i = 0; i < 3; i ++) {
    
        if (allnum + hb[i] <= num) {
        
            allnum += hb[i];
            dfs(step + 1);
            allnum -= hb[i];
        
        }
 
    }

    return ;
}

int main()
{

    cin >> n;
    
    num = n * 100;

    dfs(1);

    cout << ans;

    return 0;
}

/*
    算法：从第一张钞票开始深搜，从小到大尝试钞票面额，进行下一次深搜
*/

