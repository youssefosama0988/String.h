#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_memcpy(void *dest, const void *src, unsigned int Length);
int main()
{
    const char str1[20]="Welcome,New Value!";
    char str2[20]="Old Value";

    printf("%s\n",str2);

    my_memcpy(str2,str1,20);

    printf("%s\n",str2);

    return 0;
}
void *my_memcpy(void *dest, const void * src, unsigned int Length)
{
    void *dest_address=dest;
    const void *src_address=src;
    for(int index=0;index<Length;index++)
    {
        *(char*)dest_address=*(char*)src_address;
        dest_address++;
        src_address++;

    }
}
