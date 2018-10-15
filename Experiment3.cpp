#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter elements: ";
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<(n-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Array after sorting:\n";
    for(i=0;i<n;++i)
    {
        cout<<a[i]<<"\n";
    }
    int search;
    cout<<"Enter value to find: ";
    cin>>search;
    int first = 0;
    int last = n - 1;
    int middle = (first+last)/2;

    while (first <= last)
    {
      if (a[middle] < search)
      {
          first = middle + 1;
      }
      else if (a[middle] == search)
      {
         cout<<search<<" found at location "<<(middle+1);
         break;
      }
      else
      {
          last = middle - 1;
      }
      middle = (first + last)/2;
   }
   if (first > last)
   {
      cout<<"Not found!"<<search<<" isn't present in the list";
   }
    return 0;
}
