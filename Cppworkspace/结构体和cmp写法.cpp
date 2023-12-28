#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
struct what
{
    double x;
    double y;
    double z;
    double sum;
} s[100];
bool cmp(what b,what a)
{
    if(b.sum==a.sum)
    {
        if(b.x==a.x)
        {
            if(b.y==a.y)
            {
                return b.z<a.z;
            }
            return b.y<a.y;
        }
        return b.x<a.x;
    }
    return b.sum<a.sum;
}
int main(void)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i].x>>s[i].y>>s[i].z;
        s[i].sum=sqrt(s[i].x*s[i].x+s[i].y*s[i].y+s[i].z*s[i].z);
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++)
        cout<<s[i].x<<" "<<s[i].y<<" "<<s[i].z<<endl;

}
