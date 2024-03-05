/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    int mu;
    Node* next;
};

Node* tao_node(int x,int n)
{
    Node* node=new Node;
    node -> value=x;
    node-> mu=n;
    node -> next=NULL;
    return node;
}
struct LinkList
{
    Node* head=NULL;
    Node* tail=NULL;
};

void chen_LinkList (LinkList& a,int val,int mu)
{
    Node *tmp=tao_node(val,mu);
    tmp->value=val;
    tmp-> mu=mu ;
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
int t;
int main()
{
    cin>>t;
    getchar();
    while(t--)
    {
        LinkList a,b,c;
        string x,y;
        getline(cin,x);
        getline(cin,y);
        stringstream ss(x);
        string g;
        while(ss>>g)
        {
            if(g=="+") continue;
            int n=g.size();
            int so=0;
            int mu=0;
            int i=0;
            while(i<n&& g[i]>='0'&&g[i]<='9') so=so*10+g[i]-'0',i++;
            while(i<n &&(g[i]>'9'||g[i]<'0')) i++;
            while(i<n&& g[i]>='0'&&g[i]<='9') mu=mu*10+g[i]-'0',i++;
            chen_LinkList(a,so,mu);
        }
        stringstream ss2(y);
        while(ss2>>g)
        {
            if(g=="+") continue;
            int n=g.size();
            int so=0;
            int mu=0;
            int i=0;
            while(i<n&& g[i]>='0'&&g[i]<='9') so=so*10+g[i]-'0',i++;
            while(i<n &&(g[i]>'9'||g[i]<'0')) i++;
            while(i<n&& g[i]>='0'&&g[i]<='9') mu=mu*10+g[i]-'0',i++;
            chen_LinkList(b,so,mu);
        }
        while(a.head!=NULL &&b.head!=NULL)
        {
            if(a.head->mu > b.head->mu)
            {
                chen_LinkList(c,a.head->value,a.head->mu);
                a.head=a.head->next;
            }
            else
            {
                if(a.head->mu < b.head->mu)
                {
                    chen_LinkList(c,b.head->value,b.head->mu);
                    b.head=b.head->next;
                }
                else
                {
                    chen_LinkList(c,a.head->value+b.head->value,a.head->mu);
                    a.head=a.head->next;
                    b.head=b.head->next;
                }
            }
        }
        while(a.head!=NULL)
        {
            chen_LinkList(c,a.head->value,a.head->mu);
            a.head=a.head->next;
        }
        while(b.head!=NULL)
        {
            chen_LinkList(c,b.head->value,b.head->mu);
            b.head=b.head->next;
        }
        while(c.head!=NULL)
        {
            if(c.head->next==NULL)
            {
                cout<<c.head->value<<"*x^"<<c.head->mu;
            }
            else cout<<c.head->value<<"*x^"<<c.head->mu<<" + ";
            c.head=c.head->next;
        }
    }
}
