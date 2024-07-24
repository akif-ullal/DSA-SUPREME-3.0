// Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e
// . arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// Examples : 

//     Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
//     Output: 2 
//     Explanation: Output is index of 40 in given array i.e. 2

//     Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
//     Output: -1
//     Explanation: -1 is returned to indicate the element is not present

#include<iostream>
#include<vector>
using namespace std;
int findtarget(vector<int> arr,int target)
{
    int n=arr.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        cout<<"mid: "<<mid<<endl;
        if(target==arr[mid]) //||( mid-1>=0 && target==arr[mid-1] )||(mid+1<n && target==arr[mid+1]))
        {
            return mid;
        }
        
        if(target>arr[mid])
        {
            s=mid+2;
        }else{
            e=mid-2;
        }
        mid=s+(e-s)/2;
     
    }
       
    return ans;
}
 int main()
 {
     vector<int> arr={10};
     int target =10;
     int ans=findtarget(arr,target);
     cout<<ans<<endl;
 }