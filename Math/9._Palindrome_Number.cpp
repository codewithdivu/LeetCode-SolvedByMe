class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n = str.size();
        int start=0,end=n-1;
        bool ne = true;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='-')
            {
                return false;
            }
            if(str[start]!=str[end])
            {
                ne = false;
                break;
            }
            start++;
            end--;
            
        }
        if(ne)
        {
            return true;
        }
        else{
            return false;
        }
    }
};