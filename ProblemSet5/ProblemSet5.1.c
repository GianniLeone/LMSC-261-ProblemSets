#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   char ch, source_file[20], target_file[20];
   FILE *source, *target;
 
   source = fopen("/Users/giannileone/Documents/GitHub/LMSC-261-ProblemSets/ProblemSet5/LoremIpsum.txt", "r");
 
   if(source == NULL)
   {
      printf("Cant open source file...\n");
      return 1;
   }
 
   target = fopen("/Users/giannileone/Documents/GitHub/LMSC-261-ProblemSets/ProblemSet5/LoremIpsumcopy.txt", "w");
 
   if(target == NULL)
   {
      fclose(source);
      printf("Cant create copy file...\n");
      return 1;
   }
 
   while((ch = fgetc(source)) != EOF)
   {
      fputc(ch, target);
        if(ch == ' ') 
        {
         fputc('\n', target); 
        }
   }
 
   printf("File copied successfully.\n");
 
   fclose(source);
   fclose(target);
 
   return 0;
}
