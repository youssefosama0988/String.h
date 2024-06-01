#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *my_memchr(const void *str, char c, unsigned int length);
int main()
{
    char mystring[] ="youssef osama mohamed ";

    const void *Return_Ptr=NULL;
    printf("%X\n",mystring);

    Return_Ptr=my_memchr(mystring,'m',21);
    printf("Ptr content =>0X%X\n",Return_Ptr);
    printf("m Address  ==>0X%X\n",&mystring[11]);
    printf("%X",mystring);




    return 0;
}
void *my_memchr(const void *str, char c, unsigned int length)
{
            for(int i=0;i<length;i++)
        {
            if( *(char *)str==c)
            {

                break;
            }
            else str++;
        }
        return str;


}


