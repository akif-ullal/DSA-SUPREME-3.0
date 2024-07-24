#include<iostream>
using namespace std;

void serachingin2darray(int arr[][3],int r,int c)
{
       int sum=0;
  
    for(int i=0;i<r;i++)
    {
         int sum=0;
     
        for(int j=0;j<c;j++)
        {
    
        sum=sum+arr[i][j];
            
        }
        cout<<sum<<endl;
        
    }
    return;
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
    

}