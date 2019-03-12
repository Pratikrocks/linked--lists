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
int detect(struct node* head)
{
  struct node*h=head;
  unordered_set<struct node*>s;
  while(h!=NULL)
  {
    if(s.find(h)!=s.end())
    {
      return 1;
      break;
    }
    s.insert(h);
    h=h->next;
  }
  return 0;
}

int main()
{
  struct node *head=NULL;

  int n=6;;
  while(n--)
  {
    create(&head,n+1);

  }
  int x=detect(head);
  cout<<x<<"\n";
}
