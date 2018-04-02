#include<stdio.h>
#include<string.h>
void longsubstring(char* str);

int main()
{
  char str[100];
  scanf("%s",str);
  longsubstring(str);
}

void longsubstring(char* str)
{
    int n,i,j,k=0,l=0,f=0;
    n= strlen(str);
    char tempstr[100],reqstr[100] ="\0",test;
    
    for(i=0 ; i<n-1 ; i++)
    {
        tempstr[k]=str[i];
 
       for(j=i+1 ; j<n ; j++)
        {
        
            for(l=0;l<=k;l++)
            {
        
                if(str[j]==tempstr[l])
                {
                    f=1;
                    j=n;
                    break;
                }
            }
        
            if(f==0)
            {
                k++;                
                tempstr[k]=str[j];
            }
                f=0;
        }
   
        k=0;
        
        if(strlen(tempstr)>strlen(reqstr))
        {
            strcpy (reqstr,tempstr);
        }
    }
    printf("%s",reqstr);
}
