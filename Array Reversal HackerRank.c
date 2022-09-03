#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j,rev[1000]={0,0,0,0};
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }
    for(i=0,j=num-1;i<num;i++,j--)
    {
        rev[j] = *(arr+i);
    }
    for(i = 0; i < num; i++)
        printf("%d ", rev[i]);
    return 0;
}