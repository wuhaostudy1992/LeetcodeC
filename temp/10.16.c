#include <stdio.h>

#define ARR_LEN(array, length){length = sizeof(array)/sizeof(array[0]);}
void reverse1(int a[], int length)
{
    for(int i=0; i<=length/2; i++)
    {
        int temp = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = temp;
    }
}

void reverse2(int *a, int length)
{
    int *i=a, *j=a+length-1;
    for(; i<j; i++, j--)
    {
        int temp = *i;
        *i = *j;
        *j = temp;
    }
}

void main()
{
    int a[] = {0, 1, 2, 3, 4, 5}, length;
    ARR_LEN(a, length);
    reverse2(a, length);
    for(int i=0; i<length; i++)
    {
        printf("%d\n", a[i]);
    }
}
