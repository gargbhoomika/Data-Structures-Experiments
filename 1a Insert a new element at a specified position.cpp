
#include<iostream>
using namespace std;
int main()
{
	int arr[50], size, value, i, index;
	cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter array elements: ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element to be inserted: ";
	cin>>value;
	cout<<"At which indexition do you want to insert:  ";
	cin>>index;
	for(i=size;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[index]=value;
	cout<<"New array is : \n";
	for(i=0; i<size+1; i++)
	{
		cout<<arr[i]<<" ";
	}
}
