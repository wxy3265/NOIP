#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,q;
int num[1005],len[1005],code[1005],ans[1005];
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>num[i];
    for(int i=1;i<=q;i++)
        cin>>len[i]>>code[i];
    memset(ans,-1,sizeof(ans));
    for (int i=1;i<=n;i++)
    {
        int q=1;
        int min=99999999;
        for(int j=1;j<=len[i];j++)
            q*=10;
        for(int j=1;j<=n;j++)
        {
            if(num[j]%q==code[i])
            {
                if(num[j]<min)
                    min=num[j];
            }
        }
        
        if(min!=99999999)
            ans[i]=min;

    }
    for(int i=1;i<=q;i++)
        cout<<ans[i]<<endl;
    return 0;
}

