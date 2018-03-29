#include<stdio.h>
void logic();

int main() {
    logic();
}

void logic()
{
    int i,j,k,t,temp;
    printf("A B C O/P\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            for(k=0;k<=1;k++)
            {
                temp=j||k;
                t=i||temp;
                printf("%d %d %d %d\n",i,j,k,t);
            }
        }
    }
}
