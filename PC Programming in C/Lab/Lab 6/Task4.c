#include <stdio.h>
#include <conio.h>
int main()
{
char *ptr = "IIIT Sri City";
printf("%c\n", *&*&*ptr);
getch();
return 0;
}