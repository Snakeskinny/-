#include <bits/stdc++.h>
using namespace std;
int n, m, ans, a[1000000];
int found(int x)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }

    if (a[l] == x)
        return l;
    else
        return -1;
}

int main()
{
    scanf("%d %d", &n, &m); 
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]); 
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &ans);
        int out = found(ans); 
        printf("%d ", out);
    }
    system("pause");
    return 0;
}