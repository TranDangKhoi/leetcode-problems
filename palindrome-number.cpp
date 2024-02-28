// https://leetcode.com/problems/palindrome-number/
// Difficulty: Easy
#include <string.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isReallyANumber(char s[], int lengthOfNumber)
    {
        if (s[0] == '0')
            return false;
        for (int i = 0; i < lengthOfNumber; i++)
        {
            if (s[i] < '0' || s[i] > '9')
                return false;
        }
        return true;
    }
    bool isPalindrome(char s[])
    {
        int lengthOfNumber = strlen(s);
        if (!isReallyANumber(s, lengthOfNumber))
        {
            cout << "You have entered the wrong format" << endl;
            return false;
        }
        if (lengthOfNumber == 1)
        {
            return true;
        }
        int i = 0, j = lengthOfNumber - 1;
        int timeLooped = 0;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
                break;
            }
            else
            {
                ++i;
                --j;
            }
        }
        return true;
    }
};

int main()
{
    Solution solution;
    char s[100];
    cout << "Enter the number to see if it's palindrome or not: ";
    cin >> s;
    cout << (solution.isPalindrome(s) ? "Palindrome" : "Not palindrome") << endl;
    return 0;
}