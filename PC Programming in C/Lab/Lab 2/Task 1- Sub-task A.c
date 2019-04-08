#include <stdio.h>
#include <math.h>
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
printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
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
return 0;
}
