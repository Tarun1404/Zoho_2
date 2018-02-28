#include<stdio.h>

    int main()
    {
        int number,count=0;
        scanf("%d",&number);

        while(number>0)
        {
            if((number%2)==1)
            {
                count++;
            }
            number=number/2;
        }
    printf("%d",count);
    }

