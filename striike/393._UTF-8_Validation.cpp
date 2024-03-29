class Solution
{
public:
    bool validUtf8(vector<int> &data)
    {

        int count = 0;
        for (int i = 0; i < data.size(); i++)
        {
            int x = data[i];

            if (!count)
            {
                if ((x >> 5) == 0b110)
                    count = 1;

                else if ((x >> 4) == 0b1110)
                    count = 2;

                else if ((x >> 3) == 0b11110)
                    count = 3;

                else if ((x >> 7) != 0)
                    return false;
            }
            else
            {
                if ((x >> 6) != 0b10)
                    return false;
                count--;
            }
        }
        return (count == 0);
    }
};

/*
Approach
To solve this, we will follow these steps:

Step 1: Start with count = 0.

Step 2: for i ranging from 0 to the size of the data array.

Step 2.1: Take the value from data arra and store it in x  = data[i]

Step 2.2: If the count is 0, then

If x/32 = 110, then set count as 1. (x/32 is same as doing x >> 5 as 2^5 = 32)

Else if x/16 = 1110, then count = 2 (x/16 is same as doing x >> 4 as 2^4 = 16)

Else If x/8 = 11110, then count = 3. (x/8 is same as doing x >> 3 as 2^3 = 8)

Else if x/128 is 0, then return false. (x/128 is same as doing x >> 7 as 2^7 = 128)

Step 2.3: Else If x/64 is not 10, then return false and decrease the count by 1.

Step 3: When the count is 0, return true.

Complexity:
* TC: O(N)
* SC: O(1)
*/