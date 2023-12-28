#include <bits/stdc++.h>
using namespace std;
struct shengbu{
    int start,end;
    int huatong;
}a[100000];
int b[100000];
bool cmp(shengbu a, shengbu b){
    return a.end < b.end;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    for (int i = 1 ; i <= m; i++){
        int x, y, z;
        cin >> x >> y >> z;
        a[i].start = x;
        a[i].end = y;
        a[i].huatong =z;
    }
    int cnt = 0;
    int ans = 0;
    sort(a+1, a+1+m,cmp);
    for (int i = 1; i <= m ; i++){
    
        cnt = 0;
        for (int j = a[i].start; j <= a[i].end; j++){
        
            if (b[j] == 1){
                cnt++;
            }
        }
       if(cnt<a[i].huatong)
		{
			for(int j=a[i].end;j>=a[i].start;j--)
			{
				if(b[j]==0)
				{
					b[j]=1;
					cnt++;
					ans++;
					if(cnt==a[i].huatong)
				    break;
				}
				
			}
		}
    }
    cout << ans ;
    cout << endl;
    system("pause");
}