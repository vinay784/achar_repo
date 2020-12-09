#include<iostream>
using namespace std;

class Linkedlist{

public:
    int data;
    Linkedlist *link;

};

void printData(Linkedlist *head)
{

    while(head !=NULL)
    {
        cout<<head->data<<endl;
        head =head->link;

    }
}


int main(){

    Linkedlist *head=NULL;
    Linkedlist *second=NULL;
    Linkedlist *third=NULL;

    head=new Linkedlist();
    second=new Linkedlist();
    third=new Linkedlist();

    head->data=45;
    head->link=second;

    second->data=90;
    second->link=third;

    third->data=135;
    third->link=NULL;

    printData(head);
    return 0;


}
