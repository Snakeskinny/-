#include<bits/stdc++.h>
using namespace std;
map<int,map<int,int>> qz;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    while(q>0){
        int m;
        cin >> m;
        if(m == 1){
            int i,j,k;
            cin >> i >> j >> k;
            qz[i][j] = k;
        }
        if(m == 2){
            int i,j;
            cin >> i >> j;
            cout << qz[i][j] << '\n';
        }
        q--;
    }
    //cout<<endl;
    //system("pause");
}