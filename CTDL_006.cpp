

#include<bits/stdc++.h>
using namespace std;
int n ;
struct Node
{
    int value;
    Node* next;
};

Node* tao_node(int x)
{
    Node* node=new Node;
    node -> value=x;
    node -> next=NULL;
    return node;
}
struct LinkList
{
    Node* head=NULL;
    Node* tail=NULL;
};
LinkList a;
void chen_LinkList (LinkList& a,int val)
{
    Node *tmp=tao_node(val);
    tmp->value=val;
    tmp->next=NULL;
    if(a.head==NULL)
    {
        a.head=tmp;
        a.tail=tmp;
    }
    else
    {
        a.tail->next=tmp;
        a.tail=tmp;
    }
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        chen_LinkList(a,x);
    }
    Node* c=a.head;
    while(c->next!=NULL)
    {
        int k=c->value;
        Node* tmp=c;
        while(tmp->next!=NULL)
        {
            if(tmp->next->value==k)
            {
                tmp->next=tmp->next->next;
            }
            else tmp=tmp->next;
        }
        c=c->next;
    }
    c=a.head;
    while(true)
    {
        cout<<c->value<<" ";
        c=c->next;
        if(c==NULL) break;
    }
}
