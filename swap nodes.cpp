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

void swAP(struct node** head,int a,int b)
{
  if(a==b)return;
  struct node*x_curr=*head,*y_curr=*head,*x_prev=NULL,*y_prev=NULL;
  int x0=1,y0=1;
  while(x0!=a and x_curr!=NULL)
  {
    x0++;
    x_prev=x_curr;
    x_curr=x_curr->next;
  }
  while(y0!=b and y_curr!=NULL)
  {
    y0++;
    y_prev=y_curr;
    y_curr=y_curr->next;
  }
  if(x_curr==NULL or y_curr==NULL)return;
  if(x_prev)
  {
    x_prev->next=y_curr;
  }
  else
  {
    *head=y_curr;
  }
  if(y_prev)
  {
    y_prev->next=x_curr;
  }
  else
  {
    *head=x_curr;
  }
  struct node*tmp=x_curr->next;
  x_curr->next=y_curr->next;
  y_curr->next=tmp;

}
int main()
{
  struct node*head=NULL;
  int n=9;
  int a=2;
  int b=4;
  while(n--)
  {
    create(&head,n+1);
  }
  print(head);
  swAP(&head,a,b);
  print(head);
}
