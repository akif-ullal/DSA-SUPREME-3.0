#include<iostream>
using namespace std;

int maxnumber(int arr[],int n)
{
  int maxans=INT_MAX;
    for(int i=0;i<n;i++)
    {
    if(maxans>arr[i])
    {
        maxans=arr[i];
    }

    }
    return maxans;
}

int main()
{
    int arr[]={1,20,200,100,50};
    int size=5;
    
   int ans= maxnumber(arr,5);
   cout<<ans;

}