#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int s,int e,int x)
{
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==x)
        return mid;
        
        else if(arr[mid]>x)
        {
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={3,4,5,6,11,13,14,15,56,70};
    int target =70;
    int i=0;
    int j=1;
    int n=arr.size();
    int ans=-1;
    if(arr[0]==target)
    {
        ans=arr[0];
    }
    while(j<n && arr[j]<=target)
    {
        i=j;
        j=j*2;
    }
    ans=binarysearch(arr,i,min(j,n-1),target);
    cout<<" target is: "<<ans<<endl;
}