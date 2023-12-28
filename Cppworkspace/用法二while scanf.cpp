#include<bits/stdc++.h>
using namespace std;
int main() 
{
    char a[1000];
    int cnt=0;
    while(~scanf("%s",a))
    {
        if(cnt==0)
        {
            printf("%d",strlen(a));
            cnt++;
        }
        else
        {
            printf(" %d",strlen(a));
        }
        if(getchar()=='\n')
            break;
    }
    if(cnt==0)
        printf("0");
}
