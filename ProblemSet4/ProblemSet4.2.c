#include<stdio.h> 
int main() { 

int stacks = 8;

for(int i = 0; i < stacks; i++)
{
    printf("\t\t");
    for (int j = 0; j < i+1; j++)
    {
        printf("#");
    }
    printf("\n");
}

}