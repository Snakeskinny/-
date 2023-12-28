#include <bits/stdc++.h>
using namespace std;

char fu[1000][1000];

int main()
{
    char N;
    int n;
    scanf("%c %d", &N, &n);
    getchar(); 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            fu[i][j]=getchar();
        }
        getchar(); 
    }
    bool CR=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(fu[i][j]!=fu[n-1-i][n-1-j])
            {
                CR=false;
                break;
            }
        }
        if(!CR)
            break;
    }
    if(CR)
    {
        printf("bu yong dao le\n");
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(fu[i][j]!=0&&fu[i][j]!=' ')
                fu[i][j]=N;
        }
    }        
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            printf("%c", fu[i][j]);
        }
        printf("\n");
    }

    return 0;
}