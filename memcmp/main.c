#include <stdio.h>
#include <stdlib.h>
int mymemcmp(const void *str1, const void *str2, unsigned int n);
int main()
{
    unsigned char str1[]={1,5,5,6,6};
    unsigned char str2[]={1,3,3,6,7};
    unsigned int Result=10;
    Result=mymemcmp(str1,str2,5);
    printf("Result= %i\n",Result);
}
int mymemcmp(const void *str1, const void *str2, unsigned int n)
{   unsigned int Result=0;
   if (str1==NULL || str2==NULL){printf("ERROR!")}
   else{
     while(n--)
     {
        if(*(char *)str1!=*(char *)str2)
        {
            Result=(*(char *)str1 > *(char *)str2) ? 1:-1;
        }
        else{str1++; str2++;}

     }
    return Result;
}

}


