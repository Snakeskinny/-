#include<bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<LL> num;
    vector<LL> pos; 
    int m;
    for(int i = 0; i < n; i++){
        cin >> m;
        num.push_back(m);
    }
    int min=num[0];
    for(int i = 0; i < num.size(); i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    for(int i = 0; i < num.size() ;i++)
    {
        if(num[i] == min){
            pos.push_back(i);
        }
    }
    int minx = pos[1] - pos[0];
    for(int i = 1; i < pos.size(); i++){
        if(pos[i]-pos[i-1] < minx){
            minx = pos[i] - pos[i-1];
        }
    }
    cout << minx;
    cout << endl;
    system("pause");
}