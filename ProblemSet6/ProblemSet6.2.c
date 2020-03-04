#include <stdio.h>

void removeDigit (char str[]);

int main(void)
{
   char str[] = "h4356el4340l985o905";
   removeDigit(str);

}

void removeDigit (char *str){
   int j = 0;
   char str2[500];
      for (int i = 0; str[i] != '\0'; i++) {
         if ( ( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
               str2[j] = str[i];
		j++;
         }
      }
      printf("String: %s ", str2);
}
