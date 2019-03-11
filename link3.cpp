//----------finding kth node from middle towards head
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
void create(struct node **head,int x)
{
  struct node*n=(struct node *)malloc(sizeof(struct node));
  n->data=x;
  n->next=(*head);
  (*head)=n;
}
void getkthfrommiddle(struct node * head,int k)
{
  struct node*current=head;
  int req=(8/2+1)-k;
  if(req>=0)
  {
    int count=1;
    while(count<=req)
    {
      if(count==req)
      {
        cout<<current->data<<"\n";
        break;
      }
      else
      {
        count++;
        current=current->next;
      }
    }
  }
}
int main()
{
  struct node*head=NULL;
  int n=8;
  int k;
  cin>>k;
  while(n--)
  {
    create(&head,n+1);
  }
  getkthfrommiddle(head,k);
}
