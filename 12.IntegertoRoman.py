class Solution:
    def intToRoman(self, num: int) -> str:
        int_to_rom = {
            1000: 'M',
            900: 'CM',
            500: 'D',
            400: 'CD',
            100: 'C',
            90: 'XC',
            50: 'L', 
            40: 'XL',
            10: 'X',
            9: 'IX',
            5: 'V',
            4: 'IV',
            1: 'I'} 

        res = ""
        for i, v in int_to_rom.items():
            if num - i < 0: continue
            while(num - i >= 0):
                num = num - i
                res = res + v
        return res