class Solution
{
public:
    string reverseVowels(string s)
    {
        int start = 0;
        int end = s.size() - 1;
        while (start < end)
        {
            if (ifisvowel(s[start]) && ifisvowel(s[end]))
            {
                char temp = s[end];
                s[end] = s[start];
                s[start] = temp;
                end--;
                start++;
            }
            else if (ifisvowel(s[start]))
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return s;
    }

    bool ifisvowel(char singleChar)
    {
        if (singleChar == 'a' || singleChar == 'A' || singleChar == 'e' || singleChar == 'E' || singleChar == 'i' || singleChar == 'I' || singleChar == 'o' || singleChar == 'O' || singleChar == 'u' || singleChar == 'U')
        {
            return true;
        }
        return false;
    }
};