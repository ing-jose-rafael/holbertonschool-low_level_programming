/**
 * _strncat - Conc 2 str with n bytes
 * @dest: Input string 1
 * @src: Input string 2
 * @n: Number of bytes
 * Return: Concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
    int i;
    int len = 0;
    
    while (*(dest+len)!='\0')
        len++;
    for (i = 0; i < n && src[i]; i++)
    {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}