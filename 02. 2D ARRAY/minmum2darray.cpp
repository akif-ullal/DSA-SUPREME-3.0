#include<iostream>
using namespace std;

int serachingin2darray(int arr[][3],int r,int c)
{
     int mini=INT_MAX;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
    
            mini=min(mini,arr[i][j]);
            
        }
    }
    return mini;
}

int main()
{
    int arr[][3]={
        {1,0,3},
        {4,-5,6},
        {7,8,9}
                };

    int r=3;
    int c=3;
    int target=10;

    int ans=serachingin2darray(arr,r,c);
    cout<<ans;

}