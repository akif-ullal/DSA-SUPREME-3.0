#include<iostream>
using namespace std;

void findtwosum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<j<<" "<<i;
            }
        }
    }
}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    int target=60;

    findtwosum(arr,size,target);

}