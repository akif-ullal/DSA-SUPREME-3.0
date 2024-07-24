#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,1,1,0,1,0};
    int size=7;
    int zerocount=0;
    int oncescount=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }else
        {
            oncescount++;
        }
    }
    cout<<"number of zeroes are: "<<zerocount<<endl;
    cout<<"number of onces are: " <<oncescount<<endl;

}