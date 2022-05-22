class Solution:
    mdic = {"2": "abc",
               "3": "def",
               "4": "ghi",
               "5": "jkl",
               "6": "mno",
               "7": "pqrs",
               "8": "tuv",
               "9": "wxyz"}
    def letterCombinations(self, digits: str) -> List[str]:
        if len(digits) == 0:
            return []
        ans = []
        self.helper(digits, ans, 0, "" )
        
        return ans
    def helper(self, num, ans, i, path):
        if i == len(num):
            ans.append(path)
            return 
        for letter in self.mdic[num[i]]:
            path += letter
            self.helper(num, ans, i+1, path)
            path = path[0:len(path)-1]
            
        
            