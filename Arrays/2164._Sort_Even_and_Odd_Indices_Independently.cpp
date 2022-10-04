class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>answer(nums.size(),-1);
        vector<int>odd;
        vector<int>even;
        
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        
        int evenIndex = 0;
        int oddIndex = 0;
        
        sort(odd.begin(),odd.end(),greater <>());
        sort(even.begin(),even.end());
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                answer[i] = even[evenIndex];
                evenIndex++;
            }
            else{
                answer[i] = odd[oddIndex];
                oddIndex++;
            }
        }
        
        
        return answer;
    }
};