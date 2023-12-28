#include <bits/stdc++.h>
using namespace std;
int main()
{
   int m, n;
   scanf("%d %d", &m, &n);
   int a[30][30];
   for (int i = 0; i < m; i++) // 读取数据
   {
      for (int j = 0; j < n; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }
   printf("before:\n");
   for (int i = 0; i < m; i++) // 先输入之前的方阵
   {
      for (int j = 0; j < n; j++)
      {
         printf("%4d", a[i][j]);
      }
      printf("\n");
   }
   printf("after:\n");
   int min = a[0][0];
   for (int i = 0; i < m; i++) // 找出最小值
   {
      for (int j = 0; j < n; j++)
      {
         if (a[i][j] < min)
            min = a[i][j];
      }
   }
   int key = 0;
   for (int i = 0; i < m; i++) // 再次找出最小值所在的列
   {
      for (int j = 0; j < n; j++)
      {
         if (min == a[i][j])
         {
            key = i;
         }
      }
   }
   int tmp[100];
   for (int i = 0; i < n; i++) // tmp数组拿来存储最小值那一列
   {
      tmp[i] = a[key][i];
   }
   for (int i = 0; i < n; i++) // 最后一列换到最小值那一列
   {
      a[key][i] = a[m - 1][i];
   }
   for (int i = 0; i < m - 1; i++) // 先输出最小值上方的那一列
   {
      for (int j = 0; j < n; j++)
      {
         printf("%4d", a[i][j]);
      }
      printf("\n");
   }
   for (int i = 0; i < n; i++)
   {
      printf("%4d", tmp[i]);
   }
   system("pause");
   return 0;
}
