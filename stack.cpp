#include<iostream>
using namespace std;
struct list
{
int info;
struct list *next;
}
struct list *top=NULL;
 void push(int item)
 {
 struct list *ptr;
 ptr=new list;
 if(top==NULL)
 {
 ptr->info=item;
 ptr->next=NULL;
 top=ptr;
 }
 else
 {
 ptr->info=item;
 ptr->next=top;
 top=ptr;
 }

 void pop()
 {
 if(top==NULL)
 {
 cout<<underflow;
 }
 }

 int main()
 {
    cin>>item;
    push(item);
    pop();
}
