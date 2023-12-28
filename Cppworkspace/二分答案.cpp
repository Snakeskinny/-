#include<bits/stdc++.h>
using namespace std;
int tar[1000000];
int mid,ans;
int l ,m, n;
int judge(int x){
	int i = 0; //下一个石头跳的位置
	int tot = 0; //移除石头的数量
	int now = 0; //跳石头的人现在的位置
	while(i < n - 1){
		if(tar[i] - tar[now] > x){
			i++; //看看能否找下一个石头
			tot++; 
		}
		else 
			now = i; //不看这个石头了
		}
		if(tot > n)
			return false;
		else 
			return true;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> l >> m >> n;
	for(int i = 1 ; i <= m; i++){
		cin >> tar[i];
	}
	tar[m + 1] =l;
	int left = 1;
	int right = l;
	//从距离开始找，看看能否找到最大的距离
	while (left <= right){
        mid = (left + right) / 2;
        if (judge(mid)){ //假设现在的人的位置是可行的解
            ans = mid;  
            left = mid + 1;	//求的是最大值，看看能否更大
        }
        else
            right = mid - 1;
    }
	cout << ans;
	cout << flush;
	system("pause");
	return 0;
}