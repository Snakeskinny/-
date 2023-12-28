#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
    char a[1000];
    int len=0;
    while(~scanf("%[^\n]",a))
    {
        len=strlen(a);
        for(int i=0;i<len;i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]-'A'+'a';
            }
        }
        if(getchar()=='\n')
            break;
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    system("pause");
}