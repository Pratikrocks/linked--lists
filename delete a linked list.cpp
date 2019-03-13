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
void delet(struct node ** head)
{
  struct node*curr=*head;
  struct node*next=NULL;
  while(curr!=NULL)
  {
    next=curr->next;
    free(curr);
    curr=next;


  }
  *head=NULL;
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
int main()
{
  struct node *head=NULL;

  int n=6;;
  while(n--)
  {
    create(&head,n+1);

  }
  print(head);
  cout<<"The linkd list is deleted\n";
  delet(&head);
}
