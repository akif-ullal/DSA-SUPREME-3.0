#include<iostream>
using namespace std;

void sortzeroesandonces(int arr[],int n)
{
    int i=0;
    int j=n-1;

    while(i<=j)
    {
        if(arr[i]==0 && arr[j]==1)
        {
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==1)
        {
            j--;
        }
        else if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0 && arr[j]==0)
        {
            i++;
        }
      
    }
    
    
}

int main()
{
    int arr[]={1,0,0,1,0,0,1,1};
    int size=8;

    sortzeroesandonces(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }

}