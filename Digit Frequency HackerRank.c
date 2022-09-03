#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a[1000]={0,0,0,0,0,0,0,0,0,0},i;
    char inp[1000];
    scanf("%s",&inp);
    for(i=0;i<strlen(inp);i++)
    {
        if(inp[i]=='0')
        a[0]+=1;
        else if(inp[i]=='1')
        a[1]+=1;
        else if(inp[i]=='2')
        a[2]+=1;
        else if(inp[i]=='3')
        a[3]+=1;
        else if(inp[i]=='4')
        a[4]+=1;
        else if(inp[i]=='5')
        a[5]+=1;
        else if(inp[i]=='6')
        a[6]+=1;
        else if(inp[i]=='7')
        a[7]+=1;
        else if(inp[i]=='8')
        a[8]+=1;
        else if(inp[i]=='9')
        a[9]+=1;
    }   
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
