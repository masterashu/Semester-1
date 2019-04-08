/*
          Assignment - 1
          ASHUTOSH CHAUHAN
          UG - 1 CSE
Roll no-  S2018 001 0017

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

// TO ERASE THE MONDAYS
void eraseMondays(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            Course[i][j][0] = 0;        // first index for UG, secnd index for Slot third for day;
        }
    }
}

char UG[18];
int Course[3][10][6];
char Movie_Name[20];
const int noOfCourses = 68;
char CourseCode[][27] = {
    "                         ", // 0
    "PC-SecA-113/Comm-SecB-115", // 1
    "Comm-SecA-113/PC-SecB-115", // 2
    "DEC-Sec-A-113/OC-SecB-115", // 3
    "OC-SecA-113/DEC-Sec-B-115", // 4
    "    PC- Lab- Sec-A       ", // 5
    " DMPT - Tut Sec- A - 113 ", // 6
    " DMPT - Tut Sec- B - 115 ", // 7
    "   DMPT - Sec A - 113    ", // 8
    "   DMPT - Sec-B - 115    ", // 9
    "OC Lab - A /DEC - Lab - B", // 10
    "     PC-Lab- Sec-B       ", // 11
    "OC Lab - B /DEC - Lab - C", // 12
    "DMPT-SecA113/Comm-SecB115", // 13
    "Comm-SecA113/DMPT-SecB115", // 14
    "OC Lab - C /DEC - Lab - A", // 15
    // first 16 for UG-1
    "    Algo - Sec-A - 101   ", // 16
    "DSAA-SecA101/Algo-SecB103", // 17
    "Algo-SecA101/DSAA-SecB103", // 18
    "M3-SecB-103/Comm-SecA-101", // 19
    "Comm-SecB-103/M3-SecA-101", // 20
    "OS-SecA-101/ASE1-SecB-103", // 21
    "ASE1-SecA-101/OS-SecB-103", // 21
    "DSAA-Lab-S.A/ASE1-Lab-S.B", // 22
    "DSAA-Lab-S.B/ASE1-Lab-S.A", // 23
    "   DSAA - Sec-B - 103    ", // 24
    "OS-SecS-101/Comm-SecB-103", // 25
    "Comm-SecA-101/OS-SecB-103", // 26
    "DSAA-T-S.A101/AlgoSecB103", // 27
    "AlgoSecA101/DSAA-T-S.B103", // 28
    "M3-SecB-103/DSAA-SecA-101", // 29
    "DSAA-SecB-103/M3-SecA-101", // 30
    "OS-SecA-101/Algo-SecB-103", // 31
    "Algo-SecA-101/OS-SecB-103", // 32
    " Maths - 3 Sec - A - 103 ", // 33
    " Maths - 3 Sec - B - 101 ", // 34
    "  ASE - 1 Sec - A - 101  ", // 35
    "  ASE - 1 Sec - B - 101  ", // 36
    // Next 21 are for UG-2
    "         DM - 201        ", // 37
    "        IOT - 203        ", // 38
    "     Digicomm - 201      ", // 39
    "         IR - 113        ", // 40
    "        CSD - 115        ", // 41
    "        DIP - 115        ", // 42
    "        EMT - 203        ", // 43
    "        MERS - 201       ", // 44
    "   SDS - 101 / DE - 113  ", // 45
    "   SDS - 101 / DE - 115  ", // 46
    " TOC- 101 / Digicomm- 201", // 47
    " GE- 203/LS- 101/APS- 201", // 48
    "  IR - 101 / VLSI - 203  ", // 49
    "  DM - 201 / VLSI - 203  ", // 50
    "         YW - 201        ", // 51
    " TOC- 113 / Digicomm- 201", // 52
    "       MERS - 203        ", // 53
    "   SDS - 113 / DE - 115  ", // 54
    "         IR - 101        ", // 55
    "   GE - 203 / LS - 101   ", // 56
    "        MERS - 203       ", // 57
    "  ASE - II - Sec - A 113 ", // 58
    "  ASE - II - Sec - B 113 ", // 59
    "ASE- II Project Hour -115", // 60
    "ASE.P-115/MERS-203/DM-201", // 61
    "FA-103/ASE-II.Project-115", // 62
    "ASE-2.Project-115/APT-103", // 63
    "  TOC - 101 / EMT - 203  ", // 64
    "       Short Break       ", // 65
    "       Lunch Break       ", // 66


};

char Abbreviation[2][28][52] = { { "DMPT", "PC", "DEC", "OC", "COMM", "M-3", "ALGO", "DSAA", "OS", "ITWS", "IOT", "DIP", "EMT", "CSD", "TOC", "DIGICOMM", "ASE II", "MERS", "SDS", "DE", "GE", "BIO", "TW", "VLSI", "APS", "IR", "YW", "APT"}, {"Discrete Mathematics and Probablity Theory", "Programming in C", "Digital Design and Electronic Circuits","Overview of Computers", "Communication Skills", "Mathematics - 3", "Algorithms", "Digital Signal Analysis and Applications", "Operating Systems", "IT Workshop Applied software Engineering", "Internet Of Things", "Digital Image Processing", "Electromagnetic Theory", "Communication Systems Design", "Theoy of Computation", "Digital Communication Systems", "IT Systems Applied Software Engineering", " Microwave Enginnering and Radar Systems", "Statistics for Data Science", "DIfferential Equations", "Good Earth", "Bioscience", "Technical Writing", "Introduction to VLSI", "Advanced Problem Solving", "information retrieval", "You and The World", "Aptitude"} };

char SlotsCodeUG1[10][12] = {"09:00-10:00", "10:00-11:00", "11:00-11:15", "11:15-12:15", "12:15-13:30", "13:30-14:30", "14:30-15:30", "15:30-16:30", "16:30-17:30", "17:30-18:30"};

char SlotsCodeUG[10][12] = {"09:00-10:00", "10:00-11:00", "11:00-11:15", "11:15-12:15", "12:15-13:15", "13:15-14:30", "14:30-15:30", "15:30-16:30", "16:30-17:30", "17:30-18:30"};

void PrintAbbreviation(int ug){
    int start, end;
    switch(ug){
        case 1: start = 0; end = 4;
        break;
        case 2: start = 4; end = 8;
        break;
        case 3: start = 9; end = 27;
        break;
    }
    int x = 72;
    while(x--) printf("_");
    printf("\n| Abbreviation  | Course Name\t\t\t\t\t       |\n");
    x = 72;
    while(x--) printf("_");
    printf("\n");
    for(; start <= end; start++){
        printf("| %-8s\t| %-52s |\n", Abbreviation[0][start], Abbreviation[1][start]);
    }
    x = 72;
    while(x--) printf("_");
}

void PrintLine(){
    printf("\n");
    for(int k = 0; k < 168; k++)
        if(k == 11 || k == 37 || k == 63 || k== 89 || k == 115 || k == 141 || k == 167)
        printf("|");
        else
        printf("_");
    printf("\n");
}

// sub-task to print headings of time table
void PrintHeadings(){
    printf("  Timings  |");
    printf("          Monday         |        Tuesday          |       Wednesday         |          Thursday       |         Friday          |         Saturday        |\n");
}

// to print time table for a ug course
void PrintTimeTable(int ug){
    printf("\n\n                                                                           %s\n", UG);
    PrintLine();
    PrintHeadings();
    PrintLine();
    for(int i = 0; i < 10; i++){
        if(ug == 1)
            printf("\n%s|", SlotsCodeUG1[i]);
        else
            printf("\n%s|", SlotsCodeUG[i]);
        for(int j = 0; j < 6; j++){
            if(Course[ug - 1][i][j] == 999)
            printf("   %-22s |", Movie_Name);
            else
            printf("%s|", CourseCode[Course[ug - 1][i][j]]);
        }
        PrintLine();
    }
    printf("\n");
    PrintAbbreviation(ug);
}


// to switch hated course with movies
void WatchMovies(int ug){
    int SearchQuery;
    printf("Select the Course you hate:");
    int i = 1, end;
    switch(ug){
    case 1: i = 1; end = 17;
        break;
    case 2: i = 17; end = 37;
        break;
    case 3: i = 37; end = noOfCourses;
}
    for(; i < end; i++){
        printf("%d - %s\n", i, &CourseCode[i]);
    }
    scanf("%d", &SearchQuery);
    printf("Enter the movie you like:");
    fflush(stdin);
    scanf("%s", Movie_Name);
    fflush(stdin);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++){
            if(Course[ug - 1][i][j] == SearchQuery)
                Course[ug - 1][i][j] = 999;
        }
    }
}

// to change a course
void ChangeData(int ug){
    int SearchQuery, ChangeQuery;
    printf("Select the Course you want to change:");
    int i = 1, end;
    switch(ug){
    case 1: i = 1; end = 17;
        break;
    case 2: i = 17; end = 37;
        break;
    case 3: i = 37; end = noOfCourses;
}
    for(; i < end; i++){
        printf("%d - %s\n", i, &CourseCode[i]);
    }
    scanf("%d", &SearchQuery);

        printf("Select the Course you want to change with:");
            switch(ug){
    case 1: i = 1; end = 17;
        break;
    case 2: i = 17; end = 37;
        break;
    case 3: i = 37; end = noOfCourses;
}
    for(; i < end; i++){
        printf("%d - %s\n", i, &CourseCode[i]);
    }
    scanf("%d", &ChangeQuery);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++){
            if(Course[ug - 1][i][j] == SearchQuery)
                Course[ug - 1][i][j] = ChangeQuery;
        }
    }

}

void setupUG1(){
    strcpy(UG,"UG-1");
    int myCourse[10][6] = {{1, 6, 3, 7, 13, 11}, {2, 8, 4, 8, 14, 11}, {66, 66, 66, 66, 66, 66}, {3, 9, 1, 9, 3, 11}, {67, 67, 67, 67, 67, 67}, {4, 0, 2, 6, 4, 7}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {0, 0, 0, 0, 0, 0}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++)
            Course[0][i][j] = myCourse[i][j];
    }
}

void setupUG2(){
    strcpy(UG,"UG-2");
    int myCourse[10][6] = {{16, 19, 26, 19, 29, 34}, {17, 20, 25, 20, 30, 35}, {66, 66, 66, 66, 66, 66}, {21, 24, 18, 20, 30, 35}, {21, 0, 17, 27, 21, 36}, {67, 67, 67, 67, 67, 67}, {22, 0, 23, 0, 31, 0}, {22, 0, 23, 0, 32, 0}, {22, 0, 23, 0, 30, 0}, {0, 0, 0, 0, 0, 0}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++)
            Course[1][i][j] = myCourse[i][j];
    }
}

void setupUG3(){
    strcpy(UG,"UG-3/UG-4/MS/PhD");

    int myCourse[10][6] = {{37, 41, 38, 52, 50, 60}, {38, 44, 50, 57, 57, 61}, {66, 66, 66, 66, 66, 66}, {39, 45, 43, 43, 58, 62}, {40, 0, 38, 45, 59,62}, {67, 67, 67, 67, 67, 67}, {41, 46, 46, 49, 42, 63}, {42, 47, 47, 55, 41, 63}, {43, 48, 42, 56, 38, 64}, {42, 49, 51, 41, 51, 0}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++)
            Course[2][i][j] = myCourse[i][j];
    }
}


int main()
{
    setupUG1();
    setupUG2();
    setupUG3();
    eraseMondays();
    system("COLOR 0F");
    // introduction Menu
    int n,q;
    do{
        system("cls");
        system("COLOR 0F");
        printf("\n\n\n\t\t\t\t\t\t\tTIME-TABLE\n\n\n\n\t\t\t\t\t\tMADE IN IIIT-Sri City!\n");
        printf("\n\n\n\t\t\t\t\tWelcome Students. Choose your Batch.\n\n\t\t\t\t\t\tYour Options are:\n\t\t\t\t\t\t 1. UG-1.\n\t\t\t\t\t\t 2. UG-2\n\t\t\t\t\t\t 3. UG-3/UG-4/MS/PhD\n\n\n\t\t\t\t\t\t Press \'0\' to exit\n\t\t\t\t\t\t");
        scanf("%d", &n);
        system("cls");
        switch(n){
            case 1:  do{
                            strcpy(UG,"UG-1");
                            system("COLOR F0");
                            printf("\n\n\n\t\t\t\t\t\t\tTIME-TABLE\n\n\n\n\t\t\t\t\t\tMADE IN IIIT-Sri City!\n");
                            printf("\n\n\n\t\t\t\t\t\t\tWelcome UG-1.\n\n\t\t\t\t\t\tYour Options are:\n\t\t\t\t\t\t 1. View Time Table.\n\t\t\t\t\t\t 2. Edit a Course\n\t\t\t\t\t\t 3. Switch a hated course for a Movie\n\n\n\t\t\t\t\t\t Press \'0\' to exit\n\t\t\t\t\t\t");
                            scanf("%d", &q);
                            switch(q){
            case 1: PrintTimeTable(n);
            break;
            case 2: ChangeData(n);
            break;
            case 3: WatchMovies(n);
            break;
            case 0: break;
            default : printf("Enter Correct Option: \n");
            scanf("%d", &q);
        }

    }while(q != 0);

            break;
            case 2:  do{
                            strcpy(UG,"UG-2");
                            system("COLOR F0");
                            printf("\n\n\n\t\t\t\t\t\t\tTIME-TABLE\n\n\n\n\t\t\t\t\t\tMADE IN IIIT-Sri City!\n");
                            printf("\n\n\n\t\t\t\t\t\t\tWelcome UG-2.\n\n\t\t\t\t\t\tYour Options are:\n\t\t\t\t\t\t 1. View Time Table.\n\t\t\t\t\t\t 2. Edit a Course\n\t\t\t\t\t\t 3. Switch a hated course for a Movie\n\n\n\t\t\t\t\t\t Press \'0\' to exit\n\t\t\t\t\t\t");
                            scanf("%d", &q);
                            switch(q){
            case 1: PrintTimeTable(n);
            break;
            case 2: ChangeData(n);
            break;
            case 3: WatchMovies(n);
            break;
            case 0: break;
            default : printf("Enter Correct Option: \n");
            scanf("%d", &q);
        }
    }while(q != 0);
            case 3: do{
                            strcpy(UG,"UG-2");
                            system("COLOR F0");
                            printf("\n\n\n\t\t\t\t\t\t\tTIME-TABLE\n\n\n\n\t\t\t\t\t\tMADE IN IIIT-Sri City!\n");
                            printf("\n\n\n\t\t\t\t\tWelcome UG-3/UG-4/MS/PhD.\n\n\t\t\t\t\t\tYour Options are:\n\t\t\t\t\t\t 1. View Time Table.\n\t\t\t\t\t\t 2. Edit a Course\n\t\t\t\t\t\t 3. Switch a hated course for a Movie\n\n\n\t\t\t\t\t\t Press \'0\' to exit\n\t\t\t\t\t\t");
                            scanf("%d", &q);
                            switch(q){
            case 1: PrintTimeTable(n);
            break;
            case 2: ChangeData(n);
            break;
            case 3: WatchMovies(n);
            break;
            case 0: break;
            default : printf("Enter Correct Option: \n");
            scanf("%d", &q);
        }
    } while(q != 0);
            break;
            case 0:
                break;
            default : printf("Enter Correct Option: \n");
            scanf("%d", &n);
        }
    }while(n != 0);
    system("COLOR F5");
    printf("\n\n\n\tTHANK YOU!\n\n\t\tand, don't forget MADE IN IIITS!\n\n");
    getch();
    return 0;
}

