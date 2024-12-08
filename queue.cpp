#include<iostream>
using namespace std;
int const MAX=10;
class LQueue{
    int front=-1,last=-1,Q[MAX];
    public:
    void enque(int data){
        if(last>=MAX-1)
        {
            cout<<"Queue is full";
            return;
        }
        if(front==-1 && last==-1)
        {
            front=0;
            cout<<"First time data incertion"<<endl;
        }
        last++;
        Q[last]=data;
        return;
    }
    void deque()
    {
        if(front==-1 && last==-1)
        {
            cout<<"Nothing to delete";
            return;
        }
        if(front==last)
        {
            cout<<Q[front]<<" is last element";
            front=-1;
            last=-1;
            return;
        }
        cout<<Q[front]<<" is deleted";
        front++;
        return;      
    }
    void traverse()
    {
        if(front==-1 && last==-1)
        {
            cout<<"Queue is empty";
            return;
        }
        cout<<"Data in queue are"<<endl;
        for(int i=front;i<=last;i++)
        {
            cout<<Q[i]<<endl;
        }
    }
};
int main()
{
    LQueue s;
    int t,i=1;
    do{
        cout<<"-----------Menu------------"<<endl;
        cout<<"1. Enque data"<<endl;
        cout<<"2. Deque data"<<endl;
        cout<<"3. Traverse"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>t;
        switch (t)
        {
        case 1:
            int x;
            cout<<"Enter the data";
            cin>>x;
            s.enque(x);
            break;
        case 2:
            s.deque();
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