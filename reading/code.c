#include <stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);      //n=no.of hrs travelled in train
    int a[n],b[k],c[n];                //no.of hrs vasya read
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
 for(i=0;i<n;i++)
    {
       c[i]=a[i];
    }
int l=0;
    for (j=0;j<n;j++)
    {
        if(c[j]>c[j+1])
        {
            b[l]=c[j];
            l++;
        }
        else
        {
            b[l]=c[j+1];
            l++;
        }
    }
 printf("OUTPUT:\n");
    int small=b[0];
    for (i=1;i<k;i++)
    {
        if (b[i]<small)
        {
            small=b[i];
        }  }
    printf("%d",small);
    printf("\n");
    for (i=0;i<k;i++)
    {
    	
        for(j=0;j<n;j++)
        {
            if (b[i]==c[j])
            {
                printf("%d ",j+1);
                break;
            }   }
    }
 return 0;
}

