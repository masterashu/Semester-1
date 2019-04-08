#include <stdio.h>
#include <string.h>
#include <conio.h>



struct ug_class {
    char UG[18];
    int Course[10][6];
};
struct ug_class ug_time_table1, ug_time_table2, ug_time_table3;
char Movie_Name[20];
const int noOfCourses = 40;
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
    "OS-SecS-101/Algo-SecB-103", // 31
    "Algo-SecA-101/OS-SecB-103", // 32
    " Maths - 3 Sec - A - 103 ", // 33
    " Maths - 3 Sec - B - 101 ", // 34
    "  ASE - 1 Sec - A - 101  ", // 35
    "  ASE - 1 Sec - B - 101  ", // 36
    // Next 21 are for UG-2



};

char SlotsCodeUG1[10][12] = {"09:00-10:00", "10:00-11:00", "11:00-11:15", "11:15-12:15", "12:15-13:30", "13:30-14:30", "14:30-15:30", "15:30-16:30", "16:30-17:30", "17:30-18:30"};

char SlotsCodeUG[10][12] = {"09:00-10:00", "10:00-11:00", "11:00-11:15", "11:15-12:15", "12:15-13:15", "13:15-14:30", "14:30-15:30", "15:30-16:30", "16:30-17:30", "17:30-18:30"};

void PrintLine(){
    for(int k = 0; k < 168; k++)
        printf("_");
}

// sub-task to print headings of time table

void PrintHeadings(){
    printf("  Timings  |");
    printf("          Monday         |        Tuesday          |       Wednesday         |          Thursday       |         Friday          |         Saturday        |");
}

// to print time table for a ug course

void PrintTimeTable(struct ug_class *Data){
    printf("\n\n                                                                           %s\n", Data->UG);
    PrintLine();
    PrintHeadings();
    PrintLine();
    for(int i = 0; i < 10; i++){
        if(strcmp("UG-1", Data->UG) == 0)
            printf("%s|", SlotsCodeUG1[i]);
        else
            printf("%s|", SlotsCodeUG[i]);
        for(int j = 0; j < 6; j++){
            if(Data->Course[i][j] == 999)
            printf(" %s ", Movie_Name);
            else
            printf("%s|", CourseCode[Data->Course[i][j]]);
        }
        PrintLine();
        printf("\n");
    }
    printf("\n");
}


// to switch hated course with movies

void WatchMovies(){
        int n;
        struct ug_class * Data;

    printf("Enter the UG group:\n1. UG-1\n2.Ug-2\nUG-3/UG-4/MS/PhD\nPress 0 to exit.\n");
    switch(n){
        case 0: return;
        break;
        case 4:
        break;
        case 1: Data = &ug_time_table1;
        break;
        case 2: Data = &ug_time_table2;
        break;
        case 3: Data = &ug_time_table1;
        break;
        default: printf("!WRONG INPUT!\n");
        return;
    }
    int SearchQuery;
    printf("Select the Course you hate:");
    for(int i = 0; i < noOfCourses; i++){
        printf("%i - %s\n", &i, &CourseCode[i]);
    }
    scanf("%i", &SearchQuery);
    printf("Enter the movie you like:");
    scanf("%s", &Movie_Name);

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++){
            if(Data->Course[i][j] == SearchQuery)
                Data->Course[i][j] = 999;
        }
    }
}

// to change a course

void ChangeData(){
    int n;
        struct ug_class * Data;

    printf("Enter the UG group:\n1. UG-1\n2.Ug-2\nUG-3/UG-4/MS/PhD\nPress 0 to exit.\n");
    switch(n){
        case 0: return;
        break;
        case 4:
        break;
        case 1: Data = &ug_time_table1;
        break;
        case 2: Data = &ug_time_table2;
        break;
        case 3: Data = &ug_time_table1;
        break;
        default: printf("!WRONG INPUT!\n");
        return;
    }

    int SearchQuery, ChangeQuery;
    printf("Select the Course you want to change:");
    for(int i = 0; i < noOfCourses; i++){
        printf("%i - %s\n", i, &CourseCode[i]);
    }
    scanf("%i", &SearchQuery);
    printf("Select the Course you want to change with:");
    for(int i = 0; i < noOfCourses; i++){
        printf("%i - %s\n", i, &CourseCode[i]);
    }
    scanf("%i", &ChangeQuery);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++){
            if(Data->Course[i][j] == SearchQuery)
                Data->Course[i][j] = ChangeQuery;
        }
    }
}


void setupUG1(){
    strcpy(ug_time_table1.UG,"UG-1");
    int myCourse[10][6] = {{1, 6, 3, 7, 13, 11}, {2, 8, 4, 8, 14, 11}, {0, 0, 0, 0, 0, 0}, {3, 9, 1, 9, 3, 11}, {0, 0, 0, 0, 0, 0}, {4, 0, 2, 6, 4, 7}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {0, 0, 0, 0, 0, 0}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++)
            ug_time_table1.Course[i][j] = myCourse[i][j];
    }
}

void setupUG2(){
    strcpy(ug_time_table2.UG,"UG-2");
    int myCourse[10][6] = {{1, 6, 3, 7, 13, 11}, {2, 8, 4, 8, 14, 11}, {0, 0, 0, 0, 0, 0}, {3, 9, 1, 9, 3, 11}, {0, 0, 0, 0, 0, 0}, {4, 0, 2, 6, 4, 7}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {0, 0, 0, 0, 0, 0}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++)
            ug_time_table2.Course[i][j] = myCourse[i][j];
    }
}

void setupUG3(){
    strcpy(ug_time_table3.UG,"UG-3\\UG-4\\MS\\PhD");

        int myCourse[10][6] = {{1, 6, 3, 7, 13, 11}, {2, 8, 4, 8, 14, 11}, {0, 0, 0, 0, 0, 0}, {3, 9, 1, 9, 3, 11}, {0, 0, 0, 0, 0, 0}, {4, 0, 2, 6, 4, 7}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {5, 10, 11, 12, 5, 15}, {0, 0, 0, 0, 0, 0}};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 6; j++)
            ug_time_table3.Course[i][j] = myCourse[i][j];
    }
}
void PrintMenu(){
    int n;
    printf("Enter the UG group:\n1. UG-1\n2.Ug-2\nUG-3/UG-4/MS/PhD\n4.All UG Groups\nPress 0 to exit.\n");
    scanf("%i", &n);
    switch(n){
        case 0: break;
        case 4: PrintTimeTable(&ug_time_table1);
        PrintTimeTable(&ug_time_table2);
        PrintTimeTable(&ug_time_table2);
        break;
        case 1: PrintTimeTable(&ug_time_table1);
        break;
        case 2: PrintTimeTable(&ug_time_table2);
        break;
        case 3: PrintTimeTable(&ug_time_table3);
        break;
        default: printf("!WRONG INPUT!\n");
    }
}
int main()
{
    // introduction Menu
    int n;
    do{
        printf("Welcome.\nYour Options are:\n1. View Time Table.\n 2. Edit a Course\n3. Switch a hated course for a Movie\n Press \'0\' to exit\n");
        scanf("%i", &n);
        switch(n){
            case 1: PrintMenu();
            break;
            case 2: ChangeData();
            break;
           case 3: WatchMovies();
            break;
            case 0:
                break;
            default : printf("Enter Correct Option: \n");
            scanf("%i", &n);
        }
    } while(n != 0);

    return 0;
}
