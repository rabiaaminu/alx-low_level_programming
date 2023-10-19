/**
 * infinite_add - Add two numbers stored as strings.
 *
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string, or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0;  /* Initialize carry to 0 */
    int i, j, k;

    for (i = strlen(n1) - 1, j = strlen(n2) - 1, k = size_r - 1; i >= 0 || j >= 0 || carry; i--, j--, k--)
    {
        int sum = carry;

        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        carry = sum / 10;
        r[k] = (sum % 10) + '0';
    }

    if (k >= 0)
        return r + k;
    else
        return 0;  /* Result cannot be stored in the buffer */
}
