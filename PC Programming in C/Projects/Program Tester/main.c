#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compareFiles(FILE *fp1, FILE *fp2) 
{ 
    char ch1 = getc(fp1); 
    char ch2 = getc(fp2); 
    int error = 0;  
    while (ch1 != EOF && ch2 != EOF) 
    { 
        if (ch1 != ch2) 
        { 
            error++; 
        } 
        ch1 = getc(fp1); 
        ch2 = getc(fp2); 
    } 
    return error; 
} 

void printquestion()
{
    printf("\n\t1. Write a Program to Find factorial of a number.\n ");

}
int menu(){
    printf("\n\n\t\t Welcome Student\n\n ");
    printquestion();
    printf(" press 0 to exit.\n\nChoose Question Number: \n");
    int q;
    scanf("%d", &q);
    return q;
}

int main(){
    int q;
    q = menu();
    while(q != 0){
        int COUNT = q;

        // Input of the Code file
        system("del file.c");
        system("del output.txt");
        system("del prog.exe");
        
        char sentence[1000];
        FILE *fptr;
        fptr = fopen("program.txt", "w");
        if(fptr == NULL)
        {
            printf("Error! File not Found!");
        }
        char s[] ="end123";
        printf("Enter a sentence , enter end123 to end:\n");
        for(int i = 0;;i++)
        {
        gets(sentence);

        if (strcmp(sentence,s) == 0)
        {
            break;
        }
        fprintf(fptr,"%s\n", sentence);
        }
        fclose(fptr);

        // End Input of code file
        // Rename the Input code
        system("RENAME program.txt file.c");

        // Comparing the output

        system("gcc -o prog file.c");
        char Execute[50] = "prog < DATA/input";
        char count[5];
        itoa(COUNT, count, 10);
        strcat(Execute, count); strcat(Execute, ".txt > output.txt ");  // Getting the output
        const char *EXECUTE = Execute;
        system(EXECUTE);
        char Checkfile[20] = "DATA/check";
        strcat(Checkfile, count); strcat(Checkfile, ".txt"); // Name of Check Output file
        const char *CHECKFILE = Checkfile;
        FILE *fp1 = fopen("output.txt", "r"); 
        FILE *fp2 = fopen(CHECKFILE, "r"); 
        if (fp1 == NULL || fp2 == NULL) 
        { 
        printf("Error : Files not present"); 
        exit(0); 
        }
        if(compareFiles(fp1,fp2) == 0){
            printf("Correct Answer!");
        }
        else{
            printf("Your output have mistakes.Try adding a new line at the end.  ");
        }
        fclose(fp1); 
        fclose(fp2);
        q = menu();
    };

    return 0;
}