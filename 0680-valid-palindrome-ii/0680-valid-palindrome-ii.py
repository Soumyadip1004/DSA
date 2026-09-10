class Solution:
    def palindromeHelper(self, left, right, s: str) -> bool:
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
        return True

    def validPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1
        char_deleted = False

        while left < right:
            if s[left] != s[right]:
                return self.palindromeHelper(left + 1, right, s) or self.palindromeHelper(left, right - 1, s)

            left += 1
            right -= 1

        return True
