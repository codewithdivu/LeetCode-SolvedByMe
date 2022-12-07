class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> answer;
        char startCol = s[0];
        char endCol = s[3];
        char startRow = s[1];
        char endRow = s[4];

        for(char i=startCol;i<=endCol;i++){
            for(char j=startRow;j<=endRow;j++){
                string str;
                str = str + i;
                str = str + j;
                answer.push_back(str);
            }
        }
        return answer;
    }
};