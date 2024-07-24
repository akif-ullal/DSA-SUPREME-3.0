#include<iostream>
#include<vector>
using namespace std;
    int firstoccurence(vector<int>& arr,int target,int &ansindex)
    {
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(arr[mid]==target)
            {
                ansindex=mid;
                e=mid-1;
            }
            else if(arr[mid]>target)
            {
                e=mid-1;
            }
            else if(arr[mid]<target)
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ansindex;
    }
    int lastoccurence(vector<int>& arr,int target,int &ansindex)
    {
     int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(arr[mid]==target)
            {
                ansindex=mid;
                s=mid+1;
            }
            else if(arr[mid]>target)
            {
                e=mid-1;
            }
            else if(arr[mid]<target)
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ansindex;
    }


   int main() {
       vector<int> arr={10,20,20,20,20,20,20,30,40,50};
       int target=20;
        int ansindex=-1;
        int first=firstoccurence(arr,target,ansindex);
        int last=lastoccurence(arr,target,ansindex);
        int ans=last-first+1;
        cout<<ans<<endl;
        
        
    }
