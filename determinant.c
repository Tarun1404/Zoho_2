#include<stdio.h>


void main()
{
    int arr[10][10],a[10],i,j,k,n,t,ini=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    if(arr[0][0]!=0)
    {
     for(k=1;k<n;k++)
      {
    for(i=1;i<n;i++)
     {
     
        t=arr[i][ini]/arr[ini][ini];
        for(j=0;j<n;j++)
        {
            a[j]=arr[ini][j]*t;
            arr[i][j]=arr[i][j]-a[j];
        }
      }
      ini++;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\t");
    }
    }
}

