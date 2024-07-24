#include<iostream>
#include<vector>
using namespace std;
vector<int> findtwoscomp(vector<int>arr)
{
    vector<int>twoscompli(arr.size()+1,0);
    int m=twoscompli.size();
    int n=arr.size();
  
    for(int i=n-1,j=m-1;i>=0 && j>=0;i--,j--)
    {
        if(arr[i]==0)
        {
           twoscompli[j]=1;
        }else if(arr[i]==1){
            twoscompli[j]=0;
        } 
        
    }
    int carry=1;
    for(int i=m-1;i>=0;i--)
    {
        int sum=twoscompli[i]+carry;
        twoscompli[i]=sum % 2;
        carry=sum/2;   
    }
    if(carry==1)
    {
        twoscompli[0]=1;
    }
    return twoscompli;

}
int main()
{
    vector<int>arr={0,0,0,0};
    vector<int>ans=findtwoscomp(arr);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}