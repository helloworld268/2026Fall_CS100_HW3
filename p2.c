/* CS100 Fall 2026 - HW3 Problem 2: Palindrome
 *
 * Read n strings and test whether each of them is a palindrome.
 * Print "Yes" / "No" on one line per string.
 * Use dynamic memory to store each input string (no fixed-size arrays).
 * Do not rename this file.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        int length;
        scanf("%d\n", &length);
        char *s = malloc((size_t)length + 1);
        if (s == NULL)
            return 1;
        scanf("%s\n", s);
        int palindrome = 1;
        for (int j = 0; j < length / 2; ++j)
        {
            if (s[j] != s[length - j - 1])
            {
                palindrome = 0;
                break;
            }
        }
        if (palindrome == 0)
            printf("No\n");
        else
            printf("Yes\n");
        free(s);
    }
    return 0;
}
