class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        
        while (i < j) {
            char left = s[i];
            char right = s[j];

            if (!std::isalnum(left)) {
                i++;
                continue;
            }
            if (!std::isalnum(right)) {
                j--;
                continue;
            }
            if (std::tolower(left) != std::tolower(right)) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};