class Solution:
    def reverse(self, x: int) -> int:
        num  = str(x)
        if x < 0:
            num = num[0:1] + num[1:][::-1]
        else:
            num = num[::-1]
        ans = int(num)
        if ans < 2**31 -1 and ans > -2**31:
            return ans
        else:
            return 0
        