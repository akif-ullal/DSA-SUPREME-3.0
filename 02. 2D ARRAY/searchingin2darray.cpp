#include<iostream>
using namespace std;

bool serachingin2darray(int arr[][3],int r,int c,int target)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
                };

    int r=3;
    int c=3;
    int target=10;

    bool ans=serachingin2darray(arr,r,c,target);
    cout<<ans;

}