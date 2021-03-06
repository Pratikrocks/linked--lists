// program to find middle of a linked list
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

}
void middle(struct node*head)
{
  struct node *fast_ptr=head;
  struct node*slow_ptr=head;
  if(head!=NULL)
  {
    while(fast_ptr!=NULL and fast_ptr->next!=NULL)
    {
      fast_ptr=fast_ptr->next->next;
      slow_ptr=slow_ptr->next;
    }
    cout<<slow_ptr->data<<"\n";
  }
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
  cout<<"\nMiddle Element:\n";
  middle(head);
}
