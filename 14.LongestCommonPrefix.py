class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        total = len(strs[0])
        index = 0
        i = 0
        while i < len(strs):
            
            if len(strs[i]) < total:
                total =  len(strs[i])
                index = i
            i+=1
        prefix = ''
        mindex = 0
        wrong = False
        while mindex < len(strs[index]):
            for word in strs:
                if word[mindex] != strs[index][mindex]:
                    wrong = True
                    break
                    
            if wrong == True:
                break
            prefix = prefix + word[mindex]
            mindex +=1
        return prefix