#include<iostream>
using namespace std;

int a[50];
int n,index,val,i,x;
void Insert();
void Delete();
void Find();
void Display();

int main()
{
    cout<<"Enter Size of Array";
    cin>>n;
    cout<<"Insert Elements in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ch;
    do
    {
        cout<<"Choose\n";
        cout<<"1.Insert\n";
        cout<<"2.Delete\n";
        cout<<"3.Find\n";
        cout<<"4.Display\n";
        cout<<"0.Exit()";
        cout<<"\nEnter your choice:\t";
        cin>>ch;
        switch(ch)
        {
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Find();
                break;
            case 4:
                Display();
                break;
            default :
                cout<<"Invalid Choice ";
                break;
        }
    }
    while(ch!=0);
return 0;
}

void Insert()
{
    cout<<"\nEnter the position : ";
    cin>>index;
    cout<<"\nEnter the element to be inserted : ";
    cin>>val;
    for(i=n-1;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=val;
    n=n+1;
}

void Delete()
{
    cout<<"\nEnter the position of the element to be deleted:\t";
    cin>>index;
    val=a[index];
    for(i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    cout<<"\nThe deleted element is : "<<val<<"\n";
}

void Find()
{
    cout<<"\nEnter the element to be searched:\t";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"\nThe element is present at position : "<< i<<"\n";
            break;
        }
    }
    if(i==n)
    {
            cout<<"\nThe search is unsuccessful\n";
    }
}

void Display()
{
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

