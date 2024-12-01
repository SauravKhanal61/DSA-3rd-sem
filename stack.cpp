#include<iostream>
using namespace std;
int const MAX=10;
class Stack{
    private:
    int a[MAX],top=-1;
    public:
    void push(int data)
    {
        if(top==MAX-1)
        {
            cout<<"Stack overflow occured"<<endl;
            return;
        }
        top++;
        a[top]=data;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow occured"<<endl;
            return;
        }        
        cout<<a[top]<<" is poped."<<endl;
        top--;
    }
    void traverse(){
        if(top==-1)
        {
            cout<<"Nothing to display";
            return;
        }
        cout<<"Data in stack"<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<a[i]<<endl;
        }
    }
};
int main()
{
    Stack s;
    int t,i=1;
    do{
        cout<<"-----------Menu------------"<<endl;
        cout<<"1. Push data"<<endl;
        cout<<"2. Pop data"<<endl;
        cout<<"3. Traverse"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>t;
        switch (t)
        {
        case 1:
            int x;
            cout<<"Enter the data";
            cin>>x;
            s.push(x);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.traverse();
            break;
        case 4:
            cout<<"Program exited";
            i=0;
            break;
        default:
            cout<<"wrong input"<<endl;
            break;
        }

    }while(i);
}