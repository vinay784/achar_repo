#include<iostream>
using namespace std;

class stack{
private:
    int arr[5];
    int top;

public:
    stack(){
        int top=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==4)
            return true;
        else
            return false;

    }
    int Push(int val)
    {
        if(isEmpty())
        {
           cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Enter the value to push in to the stack:"<<endl;
            cin>>val;
            top=top+1;
            arr[top]=val;

        }
        return 0;

    }
    int pop(){

        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        else
        {
            int popValue=arr[top];
            top=top-1;
            return popValue;
        }

    }

    int count(){

        return arr[top+1];
    }

    int peek(int pos){
     if(isEmpty())
     {
         cout<<"Stack underflow"<<endl;
     }else{
         return arr[top];
     }

    }
    void change(int val,int pos)
    {
        arr[pos]=val;
        cout<<"value changed at location:"<<pos<<endl;

    }
    void dispaly(){

        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }

    }


};


int main()
{
    stack S;



}
