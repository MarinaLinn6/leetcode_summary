
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        // if the vector is empty
        if (nums.size() == 0)
        {
            return -1;
        }
        // get the middle num
        int mid = nums.size() / 2;

        if (target == nums[mid])
        {
            return mid;
        }
        if (target == nums[0])
        {
            return 0;
        }
        if (target == nums[nums.size() - 1])
        {
            return nums.size() - 1;
        }

        // if the left side is in order
        if (nums[0] < nums[mid])
        {
            if (target < nums[0] || target > nums[mid])
            {
                vector<int> newVec(nums.begin() + mid, nums.end());
                int result = search(newVec, target);
                if (result == -1)
                {
                    return -1;
                }
                return mid + result;
            }
            else
            {
                vector<int> newVec(nums.begin(), nums.begin() + mid);
                return search(newVec, target);
            }
        }

        // if right side is in order
        else
        {
            if (target < nums[mid] || target > nums[nums.size() - 1])
            {
                vector<int> newVec(nums.begin(), nums.begin() + mid);
                return search(newVec, target);
            }
            else
            {
                vector<int> newVec(nums.begin() + mid, nums.end());
                int result = search(newVec, target);
                if (result == -1)
                {
                    return -1;
                }
                return mid + result;
            }
        }
    }
};