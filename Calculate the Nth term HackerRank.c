#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) 
{
    int x[20],i;
    x[0]=a;
    x[1]=b;
    x[2]=c;
    for(i=3;i<n;i++)
    {
        x[i]=x[i-1]+x[i-2]+x[i-3];
    }
    int ans=x[n-1];
    return ans;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}