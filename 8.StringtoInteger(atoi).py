class Solution:
    def myAtoi(self, s: str) -> int:
        num = ''
        i = 0
        Negative = False
        while i < len(s) and s[i] == ' ':
            i+=1
        if  i < len(s) and s[i] == "+":
            i+=1
        elif i < len(s) and s[i] == '-':
            Negative = True
            i += 1
        while i < len(s) and s[i] <= '9' and s[i] >= '0':
            num += s[i]    
            i+=1
        if len(num) == 0:
            return 0
        
        
        ans = int(num)
        if Negative:
            ans = ans * -1
        if ans < -2**31:
            return -2**31
        elif ans > 2**31-1:
             return 2**31-1
        return ans
        