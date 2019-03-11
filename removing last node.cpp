#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node*next;
};
void create(struct node **n,int x)
{
  struct node*n1=(struct node*)malloc(sizeof(struct node));

  n1->data=x;
  n1->next=(*n);
  (*n)=n1;
}
void print(struct node*n)
{
  while(n!=NULL)
  {
    cout<<n->data<<" ";
    n=n->next;
  }
 cout<<"\n";
}
void last(struct node **head)
{
  struct node *last=*head;
  struct node*last_prev=*head;
  while(last->next!=NULL)
  {
    last_prev=last;
    last=last->next;
  }
  last_prev->next=NULL;
  
}
int main()
{
  struct node *head=NULL;

  int n=6;;
  while(n--)
  {
    create(&head,n+1);

  }
  print(head);

  last(&head);
  print(head);
}
