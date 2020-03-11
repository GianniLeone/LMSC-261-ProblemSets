#include <stdio.h>

int main(void){

int max = 100;

    for(int i=2;i<max;i++)
    {
        for(int x=2;x<i;x++)
        {
            if(i%x==0)
                break;
            else if(i==x+1)
                printf("%d\n",i);
        }
    }
}