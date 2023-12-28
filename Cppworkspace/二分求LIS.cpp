#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int as[1000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0 ;i < n ;i++){
        cin >> a[i];
    }
    int ans = 1;
    as[ans] = a[0];
    for(int pos,i = 1 ;i <n ;i++){
        if(a[i] > as[ans]){
            ans++;
            as[ans] = a[i];
        }
        else{
            pos = lower_bound(as + 1 ,as + ans ,a[i]) - as;
            as[pos] = a[i];
        }
    }
    cout << n - ans;
    cout << flush;
	system("pause");
	return 0;
}