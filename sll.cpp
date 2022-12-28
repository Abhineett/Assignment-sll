#include<bits/stdc++.h>
using namespace std;

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

            node *t=head;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=temp;
            temp->value=v;
            cout<<"Inserted."<<endl;


        }
    }
    void searchelement(int v)
    {

        if(head==NULL)
        {
            cout<<"There is no node to find element.";

        }
        else
        {
            node *t=head;
            int c=0,p=0;
            while(t!=NULL)
            {
                c++;
                if(t->value==v)
                {
                    p++;

                    cout<<"Yes"<<endl;
                    return;
                }
                else
                {
                    t=t->next;
                }
            }
            if(p==0)
            {
                cout<<"No"<<endl;
            }


        }
    }
    void printall()
    {
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
       cout<<"3. For search."<<endl;
       cout<<"4. Exit."<<endl;
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
           cout<<"Enter value that you want to search."<<endl;
           cin>>value;
           l.searchelement(value);
           break;

       case 4 :
           exit(0);



       }
    }

}
