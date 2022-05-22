class Solution:
    def convert(self, s: str, numRows: int) -> str:
        
        col = 0
        total = len(s)
        
        while total > 0:
            if total > numRows:
                total -= numRows
                col+=1
            else:
                total -= total
                col+=1
            for num in range(numRows - 2):
                if total > 1:
                    total -= 1
                    col+=1
            
        list = []  
        for i in range(numRows):
            inside = ["" for i in range(col)] 
            list.append(inside)
        # list = ["" * col] * numRows
        
        ziging = False
        x = 0
        y = 0
        for chars in s:
            
            list[y][x] = chars
            if y == numRows -1 :
                ziging = True
            elif y == 0:
                ziging = False
            
            if not ziging:
                y+=1 
            else:
                x+=1
                if y > 0:
                    y-=1
            
        ans = ""
        for i in range(numRows):
            for j in range(col):
                if list[i][j] is not "":
                    ans += list[i][j]
        return ans
                
            
                