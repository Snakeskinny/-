#include <bits/stdc++.h>
using namespace std;
struct Node{
    int pos;
    Node *pre = NULL,*nxt = NULL;
}que[100001];
Node *head = &que[1];
void add1(int num, int pos, int p){
    Node *find = &que[pos]; 
    Node *add = &que[num];
    if(p == 1){
        add->pre = find;
        add->nxt = find->nxt;
        find->nxt = add;
        find = find->nxt->nxt;
        find->pre = add;
        return;
    }
    else{
        add->nxt = find;
        add->pre = find->pre;
        find = find->pre;
        find->nxt = add;
        find = find->nxt->nxt;
        find->pre = add;
        if (pos == head->pos)head = add;
    }
}
void cut(int pos){
    Node *tmp = &que[pos];
    if(tmp->pos == head->pos) head = head->nxt;
    else{
        tmp = tmp->pre;
        tmp->nxt = tmp->nxt->nxt;
        tmp = tmp->nxt;
        tmp->pre = tmp->pre->pre;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    bool check[1000000] = {false};
    check[1] = true;
    int n,num,p;
    cin >> n;
    for (int i = 1 ;i <= n ;i++){
        que[i].pos = i;
    }
    que[1].pre = &que[1];que[1].nxt = &que[1];
    for (int i = 2 ; i <= n ;i++){
        check[i] = true;
        cin >> num >> p;
        add1(i,num,p);
    }
    cin >> n;
    for (int i = 1 ;i <= n ;i++){
        cin >> num;
        if(check[num]){
            check[num] = false;
            cut(num);
        }
    }
    int b = head->pos;
    do
    {
        cout << head->pos << " ";
        head = head->nxt;
    } while (b != head->pos);
    cout << '\n';
    cout << flush;
    system("pause");
    return 0;
}