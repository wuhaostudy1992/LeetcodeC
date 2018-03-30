#include <stdio.h>

#define ARR_LEN(array, length){length = sizeof(array)/sizeof(array[0]);}

float average(float a[], int length)
{
    int i;
    float sum = 0;
    for(i=0; i<length; i++)
    {
        sum += a[i];
    }
    return sum/length;
}

void main()
{
    float a[] = {11.1, 22.2, 33.3, 44.4, 55.5};
    int length;
    ARR_LEN(a, length);
    printf("The total length is: %d\n", length);
    //printf("%ld \t %ld\n", sizeof(a), sizeof(float));
    //float result = average(a, length);
    printf("The average score is: %f\n", average(a, length));
}
