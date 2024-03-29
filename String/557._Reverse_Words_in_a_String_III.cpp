

// ------------------------------>> JAVASCRIPT <<-----------------------------------------

/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s)
{
    if (!s)
        return;
    return s ?.split(' ') ?.map((item) = > item.split('').reverse().join('')).join(' ');
};



// ------------------------------>> C++ <<-----------------------------------------


class Solution {
public:
    string reverseWords(string s) {
        
        int i=0;
        int j=0;
        int l=0;
        
        while(i<s.length()){
            if(s[i]==' '){
                j = i;
                reverse(s.begin()+l,s.begin()+j);
                l=i+1;
            }
            i++;
        }
        reverse(s.begin()+l,s.end());
        return s;
    }
};