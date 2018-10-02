#include<iostream>
#include<stdlib.h>

using namespace std;

struct list
{
    int rollno;
    struct list *next;
};

struct list *start=NULL;

void insertbeg(int item)
{
struct list *ptr;
ptr=new list;
if(start==NULL)
{
//start=ptr;
ptr->rollno=item;
ptr->next=NULL;
start=ptr;
}
else
{
ptr->rollno=item;
ptr->next=start;
start=ptr;
}
}
void insertend(int item)
{
    struct list *ptr,*temp;
    ptr=new list;
    if(start==NULL)
    {

        ptr->rollno=item;
        ptr->next=NULL;
        start=ptr;
    }
    else
    {
        ptr->rollno=item;
        ptr->next=NULL;
        temp=start;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        }
}
void deletionbeg()
{
    struct list *temp;
    if(start == NULL)
    {

        cout<<"underflow";
    }
    else
    {
    temp=start;
    start=temp->next;
    delete temp;
    }
}
void traverse()
{
struct list *ptr,*temp;
ptr=new list;
if(start==NULL)
{
cout<<"list is empty";
}
else
{
temp=start;
while(temp!=NULL)
{
cout<<temp->rollno<<"->";
temp=temp->next;
}
}
}
void sort()
{
    struct list *temp,*temp1;
    temp=start;
    while(temp!=NULL)
    {
        temp1=start;
        while(temp1!=NULL)
        {
            if(temp->rollno>temp1->rollno)
            {
                int x;
                x=temp1->rollno;
                temp1->rollno=temp->rollno;
                temp->rollno=x;
            }
            temp1=temp1->next;
        }
        temp=temp->next;
    }
}
void removeDuplicates(struct list *start)
{
    struct list *ptr1, *ptr2, *dup;
    ptr1 = start;

    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {
            if (ptr1->rollno == ptr2->next->rollno)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
void reverse()
{
struct list *current,*forward=NULL;
struct list *previous=NULL;
current=start;
while(current!=NULL)
{
    forward=current->next;
    current->next=previous;
    previous=current;
    current=forward;
}
start=previous;
}

void deleteend()
            {
                struct list *temp1,*temp;
                if(start == NULL)
                {
                    cout<<"Underflow";
                }
                else if(start -> next == NULL)
                {
                    temp=start;
                    start=NULL;
                    delete temp;
                }
                else
                {
                    temp=start;
                    while(temp -> next != NULL)
                    {

                        temp1=temp;
                        temp=temp -> next;
                    }
                    temp1 -> next = NULL;
                    delete temp;
                }
            }

int main()
{
    int ch,item;
    while(1)
    {
         cout<<"Enter your choice"<<endl;
         cout<<"1.insert beg"<<endl;
         cout<<"2.Traverse"<<endl;
         cout<<"3.Duplicate Remove"<<endl;
         cout<<"4.Reverse"<<endl;
         cout<<"5.Sort"<<endl;
         cout<<"6.deletion beg"<<endl;
         cout<<"7.insert end"<<endl;
         cout<<"8.delete end"<<endl;
         cin>>ch;
        switch(ch)
        {

     case 1:
         cout<<"Enter item"<<endl;
         cin>>item;
         insertbeg(item);
     break;

     case 2: traverse();
     break;

     case 3: removeDuplicates(start);
     break;
     case 4: reverse();
     break;
     case 5: sort();
     break;
     case 6: deletionbeg();
     break;
     case 7:
         cout<<"Enter item"<<endl;
         cin>>item;
          insertend(item);
     break;
     case 8: deleteend();
     break;
    default:
        exit (0);
        }
    }
    return 0;
}

