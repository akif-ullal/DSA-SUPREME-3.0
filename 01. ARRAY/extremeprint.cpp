#include<iostream>
using namespace std;

void extremprint(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
      cout<<arr[i]<<" ";
      i++;
      if(i<j){
      cout<<arr[j]<<" ";
      j--;
      }
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=7;

    extremprint(arr,7);
    

}