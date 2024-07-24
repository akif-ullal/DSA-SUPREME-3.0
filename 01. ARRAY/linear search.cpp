#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n,int key)
{
    for(int i=0; i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return false;
   
}
 int main()
 {
    int arr[]={1,3,4,5,6};
    int size=5;

    int ans=linearsearch(arr,5,10);
    cout<<ans;
 }