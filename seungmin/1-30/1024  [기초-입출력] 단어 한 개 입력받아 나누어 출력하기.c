#include <stdio.h>
int main()
{
int b;
char a[21];
scanf("%s",&a);
for(b=0;a[b]!='\0';b++)
{
printf("'%c'\n",a[b]);
}
}
