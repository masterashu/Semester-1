


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int  a[n][n];
    int maxs=n*n;
    for(int i =0; i< n ; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                for(int k =i; k<n-i; k++)
                {
                    if (k>=0 && k<=n)
                    {
                        a[i][k]=maxs;
                        maxs--;
                    }
                }
                for(int k =i+1; k<n-i; k++)
                {
                    if (k>=0 && k<=n)
                    {
                        a[k][n-i-1]=maxs;
                        maxs--;
                    }

                }
                for(int k =n-i-2; k>=i; k--)
                {
                    if (k>=0 && k<=n)
                    {
                        a[n-i-1][k]=maxs;

                        maxs--;
                    }

                }
                for(int k =n-i-2; k>i; k--)
                {
                    if (k>=0 && k<=n)
                    {
                        a[k][i]=maxs;


                        maxs--;
                    }

                }
            }
        }
    }
    for(int i =0; i< n; i++)
    {


        for(int j=0; j<n; j++)
        {

            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
}
