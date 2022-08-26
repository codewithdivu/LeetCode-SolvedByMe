class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string str = to_string(n);
        sort(str.begin(),str.end());
        
        vector<string> poww;
        
        for(int i=0;i<30;i++){
            int x = pow(2,i);
            string s = to_string(x);
            sort(s.begin(),s.end());
            poww.push_back(s);
        }
        
        
        for(int j=0;j<30;j++){
            if(str==poww[j]){
                return true;
            }
        }
        return false;
    }
};