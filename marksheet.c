#include <stdio.h>

int main()
{
    int cptc, wt, dm, dem, coa;
    char name[50], roll[20], branch[30], college[50], sem[10], session[20], board[20], reg[20];

    // Input section
    printf("ENTER YOUR NAME: ");
    scanf(" %[^\n]", name);
    printf("ENTER YOUR ROLL NO: ");
    scanf(" %[^\n]", roll);
    printf("ENTER YOUR BRANCH NAME: ");
    scanf(" %[^\n]", branch);
    printf("ENTER YOUR COLLEGE NAME: ");
    scanf(" %[^\n]", college);
    printf("ENTER YOUR SEMESTER: ");
    scanf(" %[^\n]", sem);
    printf("ENTER YOUR SESSION: ");
    scanf(" %[^\n]", session);
    printf("ENTER YOUR BOARD ROLL NO: ");
    scanf(" %[^\n]", board);
    printf("ENTER YOUR REGISTRATION NO: ");
    scanf(" %[^\n]", reg);
    // take marks in input
    printf("ENTER YOUR MARKS IN CPTC: ");
    scanf("%d", &cptc);
    printf("ENTER YOUR MARKS IN WEB TECH: ");
    scanf("%d", &wt);
    printf("ENTER YOUR MARKS IN MATHS: ");
    scanf("%d", &dm);
    printf("ENTER YOUR MARKS IN DE&M: ");
    scanf("%d", &dem);
    printf("ENTER YOUR MARKS IN COA: ");
    scanf("%d", &coa);
    int total;
    total = cptc + wt + dm + dem + coa;

    // Print layout of marksheet
    printf("\n\tSTATE BOARD OF TECHNICAL EDUCATION\n");
    printf("_______________________________________________________________\n");
    printf("NAME: %s\t\tROLL NO.: %s\n", name, roll);
    printf("BRANCH: %s\t\t\tCOLLEGE: %s\n", branch, college);
    printf("SEMESTER: %s\t\t\tSESSION: %s\n", sem, session);
    printf("BOARD ROLL NO.: %s\tREGISTRATION NO.: %s\n", board, reg);
    printf("_______________________________________________________________\n");
    printf("SUBJECT\t\tFULL MARKS\tPASS MARKS\tOBTAIN MARKS\n");
    printf("CPTC:\t\t100\t\t40\t\t%d\n", cptc);
    printf("WEB TECH:\t100\t\t40\t\t%d\n", wt);
    printf("D MATHS:\t100\t\t40\t\t%d\n", dm);
    printf("DE&M:\t\t100\t\t40\t\t%d\n", dem);
    printf("COA:\t\t100\t\t40\t\t%d\n", coa);
    printf("_______________________________________________________________\n");
    printf("TOTAL:\t\t500\t\t200\t\t%d\n", total);
    printf("_______________________________________________________________\n");
    printf("\t\t\tTHANK YOU\n");

    return 0;

}
