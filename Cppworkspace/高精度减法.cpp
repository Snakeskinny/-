#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> A, vector<int> B)
{
    if (A.size() != B.size())
    {
        return A.size() > B.size();
    }
    else
    {
        for (int i = A.size() - 1; i >= 0; i--)
        {
            if (A[i] != B[i])
                return A[i] > B[i];
        }
    }
    return 1;
}
vector<int> minu(vector<int> A, vector<int> B)
{
    vector<int> res;
    int r = 0;
    for(int i = 0;i < A.size(); i++)
    {
        int n = 0;
        if(i < A.size()) n = A[i] - r;
        if(i < B.size()) n -= B[i];
        res.push_back((n+10)%10);
        if(n<0) r=1;
        else  r=0;
    }
    while(res.size() > 1 && res.back() == 0)
    {
        res.pop_back();
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    vector<int> A, B;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        A.push_back(a[i] - '0');
    }
    for (int i = b.size() - 1; i >= 0; i--)
    {
        B.push_back(b[i] - '0');
    }
    vector<int> ans;
    if(cmp(A,B)){
        ans = minu(A,B);
        for(int i = ans.size()-1; i >= 0; i--){
            cout<<ans[i];
        }
    }
    else{
        ans = minu(B,A);
        cout << "-";
        for(int i = ans.size()-1; i>=0; i--)
        {
            cout<<ans[i];
        }
    }
    cout << endl;
    system("pause");
}