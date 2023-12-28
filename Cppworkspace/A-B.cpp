#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    vector<int> num;
    int x;
    long long cnt=0;
    for(int i = 0;i < a ;i++){
        cin >> x;
        num.push_back(x);
        m[num[i]]++;
    }
    for(int i = 0;i < a;i++)
    {
        cnt+=m[num[i]+b];
    }
    cout<<cnt;
    cout<<flush;
    system("pause");
    
}