/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/

#include <stdio.h>
int main() {
    int total_students;
    printf("Enter the total number of students: ");
    scanf("%d", &total_students);
    int more_than_80 = 0, more_than_60 = 0, more_than_40 = 0, less_than_40 = 0;
    int range_81_to_100 = 0, range_61_to_80 = 0, range_41_to_60 = 0, range_0_to_40 = 0;
    int marks;
    printf("Enter marks for each student:\n");
    for (int i = 0; i < total_students; ++i) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks > 80) {
            more_than_80++;
            range_81_to_100++;
        } 
        else if (marks > 60) {
            more_than_60++;
            range_61_to_80++;
        } 
        else if (marks > 40) {
            more_than_40++;
            range_41_to_60++;
        } 
        else {
            less_than_40++;
            range_0_to_40++;
        }
    }

    printf("Students with more than 80 marks: %d\n", more_than_80);
    printf("Students with more than 60 marks: %d\n", more_than_60);
    printf("Students with more than 40 marks: %d\n", more_than_40);
    printf("Students with 40 or less marks: %d\n", less_than_40);
    printf("Students in the range 81 to 100: %d\n", range_81_to_100);
    printf("Students in the range 61 to 80: %d\n", range_61_to_80);
    printf("Students in the range 41 to 60: %d\n", range_41_to_60);
    printf("Students in the range 0 to 40: %d\n", range_0_to_40);

    return 0;
}
