#include <bits/stdc++.h>
using namespace std;
char a[500][500];
bool vis[500][500];
int n,m;
int dx[4] = {1,-1,0,0},dy[4] = {0,0,-1,1};
int cntx;
void dfs(int x,int y){
	if(vis[x][y]) return;
	int nx,ny;
	vis[x][y] = 1;
	for (int i = 0 ;i < 4 ;i++){
		nx = x + dx[i],ny = y + dy[i];
		if(nx < 1 || ny < 1 || nx > n || ny > m) continue;
		else if(a[nx][ny] == '*') continue;
		else dfs(nx,ny);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n ;i++){
		for (int j = 1 ;j <= m ;j++){
			cin >> a[i][j];
			if(a[i][j] == '*') cntx++;
		}
	}
	for(int i = 1; i <= n; i++){
		if(a[i][1]=='0')dfs(i,1);
		if(a[i][m]=='0')dfs(i,m);
	}
	for(int j=1;j<=m;++j){
		if(a[1][j]=='0')dfs(1,j);
		if(a[n][j]=='0')dfs(n,j);
	}
	int sum = m*n; //方格总数
	int cnt = 0;
	for(int i = 1 ;i <= n ;i++){
		for (int j = 1 ;j <= m ;j++){
			if(vis[i][j]) cnt++;        //被保护的数量
		}
	}
	cout << cntx << '\n';
	int res = sum - cnt;
	cout << res - cntx;
	cout << flush;
	system("pause");
	return 0;
}