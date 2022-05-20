class Solution:
    def longestPalindrome(self, s: str) -> str:
        res = ""
        for i in range(len(s)):
            stringa = self.palindrome(s, i, i)
            stringb = self.palindrome(s, i, i+1)
            res = (stringa if len(stringa)  > len(res) else res)
            res = (stringb if len(stringb)  > len(res) else res)
        return res
    def palindrome(self, s, i, l):
        while i >= 0 and l < len(s) and s[i] == s[l]:
            i=i-1
            l=l+1
        return s[i+1:l]
