//For Intermediate C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CHAATR { //no typedef used
    char name[25];
    char USN[10];
    char dept[4];
} //semicolon

int main(void) {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    CHAATR *c = (CHAATR *)malloc(n * sizeof(CHAATR)); //should have used struct keyword for lack of typedef
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", (c+i).name); //Must use -> operator to access when pointer to structure array is used
        printf("USN: ");
        scanf("%s", (c+i).USN);
        printf("Department: ");
        scanf("%s", (c+i).dept);
    }
    printf("\nDetails for all students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", (c + i).name);
        printf("USN: %s\n", (c + i).USN);
        printf("Department: %s\n", (c + i).dept);
        printf("\n");
    }
    //Lack of free(ptr);
    return 0;
}
