
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
int coun(struct node*head)
{
  struct node*curr=head;
  int c=0;
  while(curr!=NULL)
  {
    c++;
    curr=curr->next;
  }
  return c;
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

void rev(struct node** head)
{
  struct node *curr=*head;
  struct node *prev=NULL,*next=NULL;
  while(curr!=NULL)
  {
    //storing the next pointer of curr
    next=curr->next;
    //curr points to its reverse
    curr->next=prev;
    //prev is before curr
    prev=curr;
    curr=next;
  }
  *head=prev;
}
int main()
{
  struct node*head=NULL;
  int n=9;
  while(n--)
  {
    create(&head,n+1);
  }
  print(head);
  rev(&head);
  print(head);
}
