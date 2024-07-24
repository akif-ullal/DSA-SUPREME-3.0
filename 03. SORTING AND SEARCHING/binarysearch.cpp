#include<iostream>
#include<vector>
using namespace std;
bool findkey(vector<int>arr,int key)
{
    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid=s+((e-s))/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return 1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
       mid=s+((e-s))/2;
    }
    return 0;
}

int main()
{
    vector<int>arr={10,20,30,40,50,60};
    int key=100;
    bool ans=findkey(arr,key);
    cout<<ans<<endl;
}