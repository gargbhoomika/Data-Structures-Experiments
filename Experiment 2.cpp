#include<iostream>
using namespace std;
int main()
{
  int array[100], num, i, n;

  cout<<"Enter number of elements in array\n";
  cin>>n;

  cout<<"Enter integers: ";

  for (i = 0; i < n; i++)
    cin>>array[i];

  cout<<"Enter a number to search: ";
  cin>>num;

  for (i = 0; i < n; i++)
  {
    if (array[i] == num)
    {
      cout<<num<<" is present at location "<<i+1;
      break;
    }
  }
  if (i == n)
    cout<<num<<" isn't present in the array.";

  return 0;
}
