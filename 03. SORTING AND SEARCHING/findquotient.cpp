#include<iostream>
using namespace std;
int findquotient(int divisor,int dividend)
{
    int s=0;
    int e=dividend;
    int mid=s+(e-s)>>1;
    int ans=-1;
    while(s<=e)
    {
        if(divisor*mid<=dividend)
        {
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int divisor=-1;
    int dividend=1;
    int ans=findquotient(abs(divisor),abs(dividend));
    if((divisor>0 && dividend<0) || (divisor<0 && dividend>0))
    {
        ans=0-ans;
    }
    cout<<ans<<endl;
}