# Code
```c []
int strStr(char* haystack, char* needle) {
    int n, m, i ,j;
    m=strlen(needle);
    n=strlen(haystack);
    for (i=0; i<n; i++)
    {
        j = 0;
        while (j<m && haystack[i+j]==needle[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }
    return -1;
}
```
