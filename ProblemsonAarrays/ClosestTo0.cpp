#include<bits/stdc++.h>
using namespace std;

int findClosestNumber(vector<int>& nums) {
        int ClosestNumber=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(abs(nums[i])>=0 && abs(nums[i])<=abs(ClosestNumber))
            {   
                if(abs(nums[i])==abs(ClosestNumber) && nums[i]<0 && nums[i-1]>0)
                {
                    ClosestNumber=abs(nums[i]);
                }
                else{
                    ClosestNumber=nums[i];
                }
            }
           
        }
        return ClosestNumber;
    }