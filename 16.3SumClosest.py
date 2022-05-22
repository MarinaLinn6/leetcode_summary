class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        ans = math.inf
        nums.sort() 
        print(nums)
        for index in range(len(nums)):
            # print(index)
            left = index+1
            right = len(nums) - 1
            while left < right: 
                total = nums[index] + nums[left] + nums[right]
                # print(nums[index], nums[left],nums[right])
                if abs(target - total) <= abs(ans - target):
                    ans = total
                if total == target:
                    return total
                elif total < target:
                    left += 1
                elif total > target:
                    right -= 1 
        return ans