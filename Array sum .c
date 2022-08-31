#include <stdio.h>
int main()
{
    int a[50],i,n,no=0,so=0,ne=0,se=0;
    printf("No. of elements");
    scanf("%d",&n);
    for (i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            ne=ne+1;
            se=se+a[i];
        }
        else
        {
            no=no+1;
            so=so+a[i];
        }
    }
    printf("The number of even elements id %d and thier sum is %d\n",ne,se);
    printf("The number of odd elements id %d and thier sum is %d",no,so);
}

