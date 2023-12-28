#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[1000];
	while(~scanf("%s",str))
	{
		int maxn=1,tmp=1;
		int len=strlen(str);
		for(int i=1;i<len;i++)
		{
			if(str[i]==str[i-1])
			{
				tmp+=1;
				maxn=max(maxn,tmp);
			}
			else
			{
				maxn=max(maxn,tmp);
				tmp=1;
			}
		}
		printf("%d\n",maxn); 
	}
	return 0;
}
