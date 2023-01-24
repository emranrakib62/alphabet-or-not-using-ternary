#include<stdio.h>
int main()
{
   char ch;
   printf("enter the letter :\n");
   scanf("%c",&ch);
   ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?
   (printf("%c is alphabet\n",ch)):
       (printf("%c is not alphabet\n",ch));
       return 0;


}
