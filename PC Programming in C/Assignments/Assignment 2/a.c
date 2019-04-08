#include <stdio.h>
#include <string.h>

char c[5][99];

int g[5],l = 0;
int nearest[5];
char city[99];
int lowest = 99;
int calc(int j)
{
    int y = j;
    while(y > 9)
    {
    int last = y % 10;
    y = y / 10;
    y = y + last;
}
    return y;
}
int main()
{
    char name[99];
    int luckyname;
    int sum = 0;
    int luckynumber[5];

    printf("Enter your name :\n");
    scanf("%[^\n]s", &name);
    printf("Hello, %s ", name);

    for(int i = 0; i < strlen(name); i++)
    {
        sum += name[i];
    }
    luckyname = calc(sum);


    printf("your lucky number is %d.\n\n", luckyname);
    for(int k = 0; k < 5; k++)
    {
        fflush(stdin);
        sum = 0;
        printf("Enter name of city :- \n");
        scanf("%[^\n]s", &c[k]);

        for(int i = 0; i < strlen(c[k]); i++)
        {
            sum = sum + c[k][i];
        }
        luckynumber[k] = calc(sum);
        printf("lucky number of city is = %d\n\n", luckynumber[k]);
        nearest[k] = abs(luckyname - luckynumber[k]);
        if(nearest[k] < lowest)
        {
            lowest = nearest[k];
            strcpy(city, c[k]);
        }
        else
        {
            if(nearest[k] == lowest)
            {
                if(strcmp(c[k], city) < 0)
                {
                    strcpy(city, c[k]);
                }
            }
        }
    }
    printf("The best city for you is : %s.", city);
    return 0;
}