#include<bits/stdc++.h>
using namespace std;
int read(){
    int w=1,q=0;
	char ch=' ';
    while(ch!='-' && (ch<'0'||ch>'9')) ch = getchar();
    if(ch=='-') w=-1, ch=getchar();
    while(ch>='0'&&ch<='9')q = q * 10 + ch - '0',ch = getchar();
    return w*q;
}
struct num
{
    int id;
    int val;
}A[50005];
bool cmp1(struct num a,struct num b)
{
    if(a.val > b.val) return true;
    if(a.val == b.val){
        if(a.id<b.id)
            return true;
    }
    return false;
}
bool cmp2(struct num a,struct num b)
{
    return a.id<b.id;
}
int main()
{
    int a;
    a = read();
    while(a > 0)
    {
        int m;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            A[i].val = read();
            A[i].id = i;
        }
        sort(A,A+n,cmp1);
        int pd=1;
        for(int i = 0;i < n; i++){

            for(int j = i + 1 ;j < n; j++)
            {
                if(A[i].val == A[j].val) A[j].val = -0x3f;
                else break;    
            }
        }
        sort(A , A + n, cmp2);
        for(int i=0 ;i < n; i++){
            if(A[i].val != -0x3f)
                printf("%d ",A[i].val);
        }
        printf("\n");
        a--;
    }
    system("pause");
}
