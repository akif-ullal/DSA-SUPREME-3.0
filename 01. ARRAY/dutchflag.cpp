#include<iostream>
using namespace std;

void dutchflag(int arr[],int n)
{
    int i=0;
    int j=0;
    int k=n-1;
    while(j<=k)
    {
        if(arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j]==1)
        {
            j++;
        }
        else if(arr[j]==2)
        {
            swap(arr[j],arr[k]);
            k--;
        }
    }
}

int main()
{
    int arr[]={0,0,2,1,1,2,2,0,0,0};
    int size=10;

     dutchflag(arr,size);
     for(int i=0;i<size;i++)
     {
        cout<<arr[i];
     }


}