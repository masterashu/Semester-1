#include <stdio.h>
#include <conio.h>

/*
Output 1 will give 1 as an answer representing 'one byte' i.e. size of 'char'.
Output 2 will give 4 as an answer representing 'four byte' i.e. size of 'int'.
The sizeof() functions returns the size of the data type of the variable passed.
In case a funtion is passed inside 'sizeof(function1())' function it will return the size of the return type of the function function1() .
*/
int function2()
{
char a = 'A';
char b = 'B';
return (int) a + b;
}
char function1()
{
char c = 'B';
return c;
}
int main()
{
    char Answer[] = "Output 1 will give 1 as an answer representing 'one byte' i.e. size of 'char'.\nOutput 2 will give 4 as an answer representing 'four byte' i.e. size of 'int'.\nThe sizeof() functions returns the size of the data type of the variable passed.\nIn case a funtion is passed inside 'sizeof(func1())' function it will return the size of the return type of the function func1() .";

    printf("First output: %d\n", sizeof(function1()));
    printf("Secont output: %d\n", sizeof(function2()));
    printf("\n%s",Answer);
    getch();
    return 0;
}
