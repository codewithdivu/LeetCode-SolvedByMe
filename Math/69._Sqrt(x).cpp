
// we have done it using in-built function

class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};


// below solution is done by BINARY SEARCHt

// time-complexicity -> o(log n)

class Solution {
private:
    long long int binarySearch(int num){
        int start = 0;
        int end = num;
        long long int mid = start + (end-start)/2;
        long long int ans = -1;
        
        while(start<=end){
            mid = start + (end-start)/2;
            
            long long int square = mid * mid;
            
            if(square==num){
                return mid;
            }
            if(square>num){
                end = mid -1;
            }
            else if(square<num){
                ans = mid;
                start = mid + 1;
            }
            
        }
        return ans;
    }
public:
    int mySqrt(int x) {
        
        return binarySearch(x);
        
    }
};