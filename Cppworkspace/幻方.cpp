#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int main()
{
    int n;
    scanf("%d",&n);
    int row=0;
    int col=n/2;
    a[row][col]=1;
    for(int i=2;i<=n*n;i++)
    {
        row--;
        col++;
        if(row==-1&&col<n)
        {
            row=n-1;
        }
        else if(col==n&&row>=0)
        {
            col=0;
        }
        else if(row==-1&&col==n||a[row][col]>0)
        {
            row+=2;
            col--;
        }
        a[row][col]=i;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}