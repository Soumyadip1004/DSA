class Solution {
public:
    void swapChar(char& c1, char& c2) {
        char temp = c1;
        c1 = c2;
        c2 = temp;
    }
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            swapChar(s[i], s[j]);
            i++;
            j--;
        }
    }
};