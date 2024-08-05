#include<iostream>
using namespace std;
//brute force
// int sqrt(int x)
// {
//     int s=0;
//     int e=x-1;
//     int ans=-1;
//     while(s<=e)
//     {
        
//         int mid=s+(e-s)/2;
//         int prod=mid*mid;
//         cout<<" mid is: "<<mid<<endl;
//          if(prod>x){
//             e=mid-1;
//         }
//         else if(prod<=x)
//         {
//             ans=mid;
//             s=mid+1;
//         }
//     }
//     return ans;
// }

// double myprecission(int n)
// {
//     double ans=sqrt(n);
//     int precission=7;
//     double step=0.1;
//     while(precission--)
//     {
//         double j=ans;
//         while(j*j<=n)
//         {
//             ans=j;
//             j=j+step;
//         }
//         step=step/10;
//     }
//     return ans;
// }

double sqrt(int x)
{
    double s=0;
    double e=x;
    double ans=-1;
    while((e-s)>0.0000001)
    {
        
        double mid=s+(e-s)/2;
        double prod=mid*mid;
        cout<<" mid is: "<<mid<<endl;
         if(prod>x){
            e=mid;
        }
        else if(prod<=x)
        {
            ans=mid;
            s=mid;
        }
    }
    return ans;
}

int main()
{
    int x=63;
    //double ans=myprecission(x);
    double ans1=sqrt(x);
    printf(" precision is: %.7f\n",ans1);
}

