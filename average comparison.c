//Determine whether the average of AA and BB is strictly greater than CC or not?//
#include <stdio.h>

int main() 
{
    float a,b,c;
    int i;
    scanf("%d",&i);
    while(i)
    {
        scanf("%f %f %f",&a,&b,&c);
        if(c<(a+b)/2)
        printf("YES\n");
        else
        printf("NO\n");
        i--;
    }
	return 0;
}

