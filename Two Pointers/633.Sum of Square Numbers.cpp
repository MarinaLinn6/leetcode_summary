class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long mid = sqrt(c);
        int start = 0;
        while (start <= mid)
        {
            if (start * start + mid * mid == c)
            {
                return true;
            }
            else if (start * start + mid * mid > c)
            {
                mid--;
            }
            else
            {
                start++;
            }
        }

        return false;
    }
};