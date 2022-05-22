class Solution:
    def maxArea(self, height: List[int]) -> int:
        # total = 0
        # for i in range(len(height)):
        #     for j in range(i, len(height)):
        #         val = min(height[i], height[j])
        #         temp = val * (j - i)
        #         if total < temp:
        #             total = temp
        # return total
        
        left = 0
        right = len(height) - 1
        total = 0
        while left < right:
            smallest = min(height[left], height[right])
            temp = smallest * (right - left)
            total = temp if (temp > total) else total
            if height[left] > height[right]:
                right = right - 1
            else:
                left = left + 1
        return total
            
            
            