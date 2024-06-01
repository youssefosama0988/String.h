#include <stdio.h>
#include <stdlib.h>
void *memset(void *str, char c, unsigned int Len);
int main()
{
    char string[11]="\0";
    printf("%s\n",string);
    memset(string,'A',10);
    printf("%s\n",string);

    return 0;
}
void *memset(void *str, char c, unsigned int Len)
{   void *ptrstr=str;
    for(int index=0;index<Len;index++)
    {
        *(char *)ptrstr=c;
        ptrstr++;

    }
}
