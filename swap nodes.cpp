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

void swAP(struct node** head,int a)
{
  int count=coun(*head);
  if(a>count)return;
  //if(a==b)return;
  else
  {
    struct node*x=*head;
    struct node*y=*head;
    struct node*x_prev=NULL;
    struct node*y_prev=NULL;
    for(int i=1;i<a;i++)
    {
      x_prev=x;
      x=x->next;
    }
    for(int i=1;i<count-a+1;i++)
    {
      y_prev=y;
      y=y->next;
    }
    if(x_prev)
    {
      x_prev->next=y;

    }
    //x->next=y_prev->next->next;
    if(y_prev)
    {
      y_prev->next=x;
    }
    //y->next=x_prev->next->next;
    struct node* temp=x->next;
    x->next=y->next;
    y->next=temp;
    if(a==1)*head=y;
    if(a==count)*head=x;
  }
    print(*head);
}
int main()
{
  struct node*head=NULL;
  int n=8;
  int a=2;
  while(n--)
  {
    create(&head,n+1);
  }
  print(head);
  swAP(&head,a);
  print(head);
}
