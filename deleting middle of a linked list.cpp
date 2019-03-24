//----deleting middle of a linked list
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
void delmiddle(struct node** head)
{
  struct node* fast_ptr=(*head);
  struct node* slow_ptr=(*head);
  struct node*prev=NULL;
  if(head!=NULL)
  {
    while(fast_ptr!=NULL and fast_ptr->next!=NULL)
    {
      prev=slow_ptr;
      slow_ptr=slow_ptr->next;
      fast_ptr=fast_ptr->next->next;
    }

  }
  prev->next=prev->next->next;
  //slow_ptr->next=NULL;

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
  while(n--)
  {
    create(&head,n+1);
  }
  print(head);
  delmiddle(&head);
  print(head);
}
