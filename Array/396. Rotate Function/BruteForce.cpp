class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int ans=INT_MIN;
        int n=nums.size();

        while(n--){
            int sum=0,multi=0;
            for(int i=0;i<nums.size();i++){
                sum+=(multi*nums[i]);
                multi++;
            }
            ans=max(ans,sum);

            int num=nums[nums.size()-1];
            nums.pop_back();
            nums.insert(nums.begin(),num);
        }
        return ans;
    }
};
