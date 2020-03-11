#include <stdio.h>
#include <string.h>

int main(void){

char string[128];
char variable;


printf("Enter a string...\n");
scanf("%s", string);

printf("Enter a character...\n");
scanf(" %c", &variable);


int i = 0;
int count = 0;

while (string[i] != '\0')
{
    if (string[i] == variable)
    {
        count++;
    }
    i++;
}

printf(("The letter '%c' repeated %i time(s)"), variable, count);

}

