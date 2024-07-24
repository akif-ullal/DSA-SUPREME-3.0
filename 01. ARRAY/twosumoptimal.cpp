#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
   
    bool twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
      
        while(i<j && i<n && j<n)
        {
            int sum=nums[i]+nums[j];
            if(target==sum)
            {
              return 1;

            }else if(target>sum)
            {
                i++;
            }
            else{
                j--;
            }
          
        }
        return 0;
    }

    int main()
    {
        vector<int> arr={2,7,11,15};
        int target=20;
        bool ans=twoSum(arr,target);
        cout<<ans<<endl;
    }
