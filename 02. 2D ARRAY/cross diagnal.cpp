#include<iostream>
using namespace std;

int main()
{
    int arr[][3]={ 

        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int r=3;
    int c=3;
    for(int i=0;i<r;i++)
    {
       cout<<arr[i][r-i-1]<<endl;
    }


}