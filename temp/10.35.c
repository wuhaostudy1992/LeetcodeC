#include <stdio.h>
#include <string.h>

#define ARR_LEN(array, length){length = sizeof(array)/sizeof(array[0]);}

void sort(char *name[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(name[i], name[j])>0)
            {
                char *temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
}

void main()
{
    char *name[]={ "CHINA","AMERICA","AUSTRALIA","FRANCE","GERMAN"};
    int length;
    ARR_LEN(name, length);
    sort(name, length);
    
    for(int i=0; i<length; i++)
    {
        printf("%s\n", name[i]);
    }
}
