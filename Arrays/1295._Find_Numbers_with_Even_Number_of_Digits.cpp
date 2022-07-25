class Solution {
private:
     int countDigit(int num){
        int count = 0;
        while(num!=0){
            int digit = num%10;
            count=count+1;
            num=num/10;
        }
        return count;
    }
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int n = countDigit(nums[i]);
            if(n%2==0){
                ans = ans + 1;
            }
        }
        return ans;
    }
};