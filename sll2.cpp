#include<bits/stdc++.h>
using namespace std;
int v2;

class node
{
public:

    node *next;
    int value;

    node()
    {
        next=NULL;
        value=0;
    }
};

class linkedlist
{
    node *head;
public:
    linkedlist()
    {

        head=NULL;
    }
    void insertnodeATend(int v)
    {


        node *temp=new node();
        if(head==NULL)
        {

            head=temp;
            head->value=v;
            cout<<"Inserted."<<endl;
        }
        else
        {
            if(v2<=v)
            {

                node *t=head;
                while(t->next!=NULL)
                {
                t=t->next;
                }
                t->next=temp;
                temp->value=v;
                cout<<"Inserted."<<endl;
            }
            else
            {
                cout<<"Not insert,Enter grater than before."<<endl;
            }
        }
        v2=v;
    }

    void removeDuplicates()
    {
        node *t=head;
        node *t2;
        int sv;
       if(head==NULL)
       {
           cout<<"There is no node."<<endl;
       }
       else if(head->next==NULL)
       {
           cout<<head->value<<endl;
       }
       else{
           while(t!=NULL)
           {

               sv=t->value;
               t2=t;
               t=t->next;
               if(sv==t->value)
               {
                 if(t->next!=NULL)
                 {
                     t2->next=t->next;
                     t=t->next;
                 }
                 else
                 {
                     t2->next=NULL;
                 }
               }
               else
               {
                   sv=t->value;
                   t2=t;
                   t=t->next;
               }
           }

       }


    }
    void printall()
    {
        removeDuplicates();
        node *t=head;
        while(t!=NULL)
        {
            cout<<t->value<<"->";
            t=t->next;
        }

    }

};
int main()
{
    linkedlist l;
    int value;
    int choice;
    while(1)
    {
         cout<<"\n------------------------------------------"<<endl;
         cout<<"CHOOSE YOUR OPERATION FROM BELOW."<<endl;
         cout<<"1. For insert."<<endl;
         cout<<"2. For printall."<<endl;
         cout<<"3. Exit."<<endl;
         cout<<"------------------------------------------"<<endl;
         cin>>choice;
       switch(choice)
       {

       case 1 :

           cout<<"Enter value to insert."<<endl;
           cin>>value;
           l.insertnodeATend(value);
           break;

       case 2 :
           l.printall();
           break;

       case 3 :
          exit(0);

    }



  }
  return 0;
}
