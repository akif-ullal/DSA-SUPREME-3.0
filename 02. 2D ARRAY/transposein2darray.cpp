#include<iostream>
using namespace std;

void serachingin2darray(int arr[][3],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
         swap(arr[i][j],arr[j][i]);
        }
    }
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
  
   serachingin2darray(arr,r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         cout<<arr[i][j];
        }
        cout<<endl;
    }
   
    

}