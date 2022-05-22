class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        nums.sort()
        mdict = {} 
        for index in range(len(nums)):
            if nums[index] not in mdict:
                mdict[nums[index]] = 1
            else: 
                continue
            single_ans = []
            left = index+1
            right = len(nums) - 1
            while left < right: 
                if nums[index] + nums[left] + nums[right] == 0:
                    single_ans = [nums[index], nums[left], nums[right]]
                    ans.append(single_ans)
                    single_ans = []
                    left += 1 
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                elif nums[left] + nums[right] < 0 - nums[index]:
                    left += 1
                else:
                    right -= 1 
        return ans
                        
                        