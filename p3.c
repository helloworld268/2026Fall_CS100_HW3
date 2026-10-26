/* CS100 Fall 2026 - HW3 Problem 3: String and character manipulation
 *
 * Implement the hw3_* functions below. Do NOT write a main function here:
 * the autograder compiles this file together with its own test driver.
 * Implementations must conform to the C standard (see cppreference) and
 * must not call any standard library string/character functions.
 * Do not rename this file.
 */
#include <stddef.h>

int hw3_islower(int ch) { return ch >= 'a' && ch <= 'z'; }
int hw3_isupper(int ch) { return ch >= 'A' && ch <= 'Z'; }
int hw3_isalpha(int ch) { return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); }
int hw3_isdigit(int ch) { return ch >= '0' && ch <= '9'; }
int hw3_tolower(int ch) { return ch + ('a' - 'A'); }
int hw3_toupper(int ch) { return ch - ('a' - 'A'); }

size_t hw3_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}
char *hw3_strchr(const char *str, int ch)
{
    int locate = 0;
    while (1)
    {
        if (str[locate] == (char)ch)
            return (char *)(str + locate);
        if (str[locate] == '\0')
            return 0;
        locate++;
    }
    return 0;
}
char *hw3_strcpy(char *dest, const char *src)
{
    size_t i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
char *hw3_strcat(char *dest, const char *src)
{
    size_t i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    size_t j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
int hw3_strcmp(const char *lhs, const char *rhs)
{
    size_t i = 0;
    while (lhs[i] != '\0' && lhs[i] == rhs[i])
        i++;
    return (char)lhs[i] - (char)rhs[i];
}
