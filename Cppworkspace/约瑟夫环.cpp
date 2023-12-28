#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, s, m,count=0;
    int a[100],cnt=0;
	scanf("%d%d%d", &n, &m, &s);
	for (int i = 0; i <= n; i++)
		a[i] = i;
	for (int i = s; i <= n; i++)
	{
		if(a[i])
		cnt++;
		if (cnt == m)
		{
			printf("%3d", i);
			a[i] = 0;
			cnt = 0;
			count++;
		}
		if (i == n)
			i = 0;
		if (count == n)
            break;
	}
    system("pause");
	return 0;
}