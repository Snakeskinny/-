#include <bits/stdc++.h>
using namespace std;
void shiyi(string a){
    int w = 0, l = 0;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(a[i] == 'W')
            w++;
        if(a[i] == 'L')
            l++;
        if((w >= 11  || l >= 11) && abs(w-l) >= 2){
            cout << w << ":" << l << '\n';
            w = 0;
            l = 0;
        }
        if(a[i] == 'E')
        {
            cout << w << ":" << l << '\n';
        }
    }
}
void ershiyi(string a){
    int w = 0, l = 0;
    for(int i = 0 ; i < a.size() ; i++)
    {
        if(a[i] == 'W')
            w++;
        if(a[i] == 'L')
            l++;
        if((w >= 21  || l >= 21) && abs(w-l) >= 2){
            cout << w << ":" << l << '\n';
            w = 0;
            l = 0;
        }
        if(a[i] == 'E')
        {
            cout << w << ":" << l << '\n';
        }
    }
}             
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    char s;
    while(cin >> s)
    {
        a.push_back(s);
        if(s == 'E') break;
    }
        
    shiyi(a);
    cout << "\n";
    ershiyi(a); 
    cout << endl;
    cout << endl;
    system("pause");
}
