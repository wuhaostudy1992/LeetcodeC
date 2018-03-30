#include <stdio.h>

int f(int n)
{
    int result = 1;
    for(int i=1; i<=n; i++)
    {
        result *= i;
    }
    return result;
}

void main()
{
    printf("%d\n", f(5));
}
