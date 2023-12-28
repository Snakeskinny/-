#include<bits/stdc++.h>
using namespace std;
double jiecheng(double a)
{
    double sum=1;
    for(int i=1;i<=a;i++)
    {
        sum*=i;
    }
    return sum;
}
int main() 
{
    double m,n;
    long long int C;
    scanf("%lf%lf",&m,&n);
    C=jiecheng(n)/(jiecheng(n-m)*jiecheng(m));
    printf("%d",C); 
}