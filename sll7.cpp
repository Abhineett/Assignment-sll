#include<bits/stdc++.h>
using namespace std;
int ncount=0;

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

        ncount++;
        node *temp=new node();
        if(head==NULL)
        {


            head=temp;
            head->value=v;
            //cout<<"Inserted."<<endl;
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
            //cout<<"Inserted."<<endl;


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
    int findvalue(int N)
    {
       /*node *t=head;
       while(t->next!=NULL)
       {
           t=t->next;
       }*/
       int d=ncount-N;
       node *t=head;
       for(int i=0;i<d;i++)
       {
           t=t->next;
       }
       cout<<t->value;

    }



};
int main()
{

    linkedlist l;
    l.insertnodeATend(1);
    l.insertnodeATend(2);
    l.insertnodeATend(3);
    l.insertnodeATend(4);
    l.printall();
    cout<<endl;
    l.findvalue(3);
    /*l.insertnodeATend(35);
    l.insertnodeATend(15);
    l.insertnodeATend(4);
    l.insertnodeATend(20);
    l.printall();
    cout<<endl;
    l.findvalue(4);*/



}
