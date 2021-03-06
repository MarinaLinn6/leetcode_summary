class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        ans = []
        nums.sort()
        if len(nums) < 4:   
            return []
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            for j  in range(i+ 1, len(nums)):
                if j > i+ 1 and nums[j] == nums[j - 1]:
                   continue
                left = j + 1
                right = len(nums) - 1
                while left < right: 
                    total = nums[i] + nums[j] + nums[left] + nums[right]
                    if total == target:
                        temp = [nums[i], nums[j], nums[left], nums[right]]
                        ans.append(temp)
                        left += 1
                        while left < right and nums[left] == nums[left - 1]:
                            left += 1
                    elif total < target:
                        left += 1
                    else:
                        right -= 1
        return ans
                