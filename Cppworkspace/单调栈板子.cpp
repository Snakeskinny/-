//P2947 [USACO09MAR] Look Up S
#include<bits/stdc++.h>
using namespace std;
#define ll long long
stack<int> ans;
int a[1000000];
int b[1000000];
int main()
{
	ios :: sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1 ; i <= n ;i++){
		cin >> a[i];
	}
	for(int i = n ;i >= 1 ;i--){
		while(!ans.empty() && a[ans.top()] <= a[i]){
			ans.pop();
		}
		if(!ans.empty()) b[i]=ans.top();
		else b[i] = 0;
		ans.push(i);
	}
	for (int i = 1 ;i <= n ;i++){
		cout << b[i] << "\n";
	}
	cout << flush;
	system("pause");
	return 0;
}