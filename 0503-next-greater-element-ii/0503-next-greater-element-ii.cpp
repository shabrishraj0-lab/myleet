class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> a(nums.size());
        for(int i=0;i<nums.size();i++){
           a[i]=-1; int b=nums.size()-1; int j=i;
               while(b--){
                if(nums[j]>nums[i]){
                    break;
                }
                if(j==nums.size()-1){
                    j=0;
                }
                if(nums[j]>nums[i]){
                    break;
                }
                
                j++;
                if(j==i){
                    break;
                }
                
             } 
             if(nums[j]>nums[i]){
                a[i]=nums[j];
             }
        }
        return a;
    }
};