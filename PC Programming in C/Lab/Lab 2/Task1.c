
/*
        ASHUTOSH CHAUHAN
        S20180010017
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
//function to return the max of two numbers
float Max(int a, int b){
if(a > b)
    return a;
else
    return b;

}

int main()
{
float a, b, c;
printf("Enter coefficients: ");
scanf("%f %f %f",&a, &b, &c);
float determinant = b * b - c * a * 4;
if (determinant > 0)
{
// sqrt() function returns square root
float root1 = (sqrt(determinant) - b) / (a * 2) ;
float root2 = (sqrt(determinant) + b) / (a * 2) * -1;
printf("max root = %.2lf",Max(root1, root2));
}
else if (determinant == 0)
{
float root1, root2;
root1 = root2 = -b/(a * 2);
printf("root1 = root2 = %.2lf;", root1);
}
else
{
float realPart = -b/(a * 2);
float imaginaryPart = sqrt(-determinant)/(a * 2);
printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart,
imaginaryPart, realPart, imaginaryPart);
}
getch();
return 0;
}
