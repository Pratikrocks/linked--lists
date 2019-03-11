//----swap kth node from begining and from the second
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node*next;
};
void create(struct node **head,int x)
{
  struct node *curr=(struct node*)malloc(sizeof(struct node));
  curr->data=x;
  curr->next=(*head);
  (*head)=curr;
}
void swAP(struct node** head,int a,int b)
{
  
}
void print(struct node *head)
{
  struct node*curr=head;
  while(curr!=NULL)
  {
    cout<<curr->data<<" ";
    curr=curr->next;
  }
  cout<<"\n";
}
int main()
{
  struct node*head=NULL;
  int n=8;
  int a=1,b=1;
  while(n--)
  {
    create(&head,n+1);
  }
  print(head);
  swAP(&head,a,b);
  print(head);
}
