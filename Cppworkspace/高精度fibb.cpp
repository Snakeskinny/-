#include <bits/stdc++.h>
using namespace std;
int fibb[1005][1000];
int main()
{
    for(int i=0;i<1005;i++)
    {
        for(int j=0;j<300;j++)
        {
            fibb[i][j]=0;
        }
    }
    fibb[1][0]=1;
    fibb[2][0]=1;
    int s=0,plus=0;
    for(int i=3;i<1005;i++)
    {
        for(int j=0;j<300;j++)
        {
            s=fibb[i-2][j]+fibb[i-1][j]+plus;
            fibb[i][j]=s%10;
            plus=s/10;
        }
    }
    int n;
    scanf("%d",&n);
    int flag=0;
        for(int i=210;i>=0;i--)     
        {
            if(fibb[n][i]==0&&flag==0)
                continue;
            else
            {
                cout<<fibb[n][i];
                flag=1;
            }
        }
    system("pause");
    return 0;
}