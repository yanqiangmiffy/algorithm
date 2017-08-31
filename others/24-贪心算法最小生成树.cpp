#include<iostream>
using namespace std;
struct node
{
 int l;
 int r;
 int len;
 node *next;
};
void insert(node *&h,node *p)   //指针插入排序
{
 node *q=h;
 while(q->next && q->next->len <= p->len)
 {
  q=q->next;
 }
 p->next=q->next;
 q->next=p;
}
int main()
{
// freopen("001.in","r",stdin);
 node *h,*p;
 int n,m,x,temp;
 int *a;
 int i,j;
 int sum;
 cin>>n;
 while(n--)
 {
  sum=0;
  cin>>m;
  a=new int[m+1];
  for (i=1;i<=m;i++)
  {
   a[i]=i;
  }
  h=new node;
  p=h;
  p->next=NULL;
  for (i=1;i<=m;i++)
   for (j=1;j<=m;j++)
   {
    cin>>x;
    if (i>j && x!=0)
    {
     p=new node;
     p->l=i;
     p->r=j;
     p->len=x;
     p->next=NULL;
     insert(h,p);   //调用插入排序
    }
   }
          p=h->next;
   while (p)
   {
    if (a[p->l]!=a[p->r])
    {

     sum+=p->len;
     temp=a[p->l];
     for(i=1;i<=m;i++)
      if (a[i]==temp)
      {
       a[i]=a[p->r];
      }
    }
   p=p->next;
   }
   /*   可以测试程序工作是否正常
   p=h->next;
   while(p)
   {
    cout<<p->l<<':';cout<<p->r<<' ';
    cout<<p->len<<"   ";
    p=p->next;
   }
   */
   cout<<sum<<endl;
 }
 return 0;
}
