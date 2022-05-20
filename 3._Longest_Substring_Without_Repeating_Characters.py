class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
#vesion2
        i = j = 0
        ans = 0
        mdict = dict()
        for j in range(len(s)):
#jump
            if s[j] in mdict:
                i = max(mdict[s[j]], i)
            ans = max(ans, j - i + 1)
            mdict[s[j]] = j + 1
        return ans

#sliding window1
#mchars = dict()
#left = right = 0
#ans = 0

#while right < len(s):

#if s[right] not in mchars or mchars[s[right]] == 0:
#mchars[s[right]] = 1
#ans = max(ans, right - left + 1)
#right += 1
#else:
#mchars[s[left]] -= 1
#left += 1

#return ans
