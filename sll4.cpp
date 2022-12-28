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
    void printAll()
    {
        if(head==NULL)
        {
            cout<<"There is no node."<<endl;
            return;
        }
        if(head->next==NULL)
        {
            cout<<head->value<<endl;
            return;
        }
        else
        {
            node *t=head;
            node *t2;
            while(t->next!=NULL)
            {
                t2=t;
                t=t->next;
            }
            t->next=head;
            head=t;
            t2->next=NULL;
            t=head;
            while(t!=NULL)
            {
              cout<<t->value<<"->";
              t=t->next;
            }

        }
    }

};
int main()
{
    linkedlist l;
    l.insertnodeATend(1);
    l.insertnodeATend(2);
    l.insertnodeATend(3);
    l.insertnodeATend(4);
    l.insertnodeATend(5);
    l.printAll();
    cout<<endl;
    /*l.insertnodeATend(3);
    l.insertnodeATend(8);
    l.insertnodeATend(1);
    l.insertnodeATend(5);
    l.insertnodeATend(7);
    l.insertnodeATend(12);
    l.printAll();*/

    return 0;
}
