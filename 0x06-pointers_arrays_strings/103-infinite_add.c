#include <stdio.h>
#include <stdlib.h>

/**
 * Function to add two numbers
 * @param n1 the first number
 * @param n2 the second number
 * @param r the buffer that the function will use to store the result
 * @param size_r the buffer size
 * @return a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
if (size_r < (strlen(n1) + strlen(n2) + 1)) {
return 0;
}
int carry = 0;
for (int i = strlen(n1) - 1, j = strlen(n2) - 1, k = size_r - 1; i >= 0 || j >= 0; i--, j--, k--) {
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
}
if (carry) {
r[0] = carry + '0';
size_r++;
}
r[size_r - 1] = '\0';
return r;
}
