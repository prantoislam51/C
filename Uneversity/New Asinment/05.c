/*
Name: Md.Pranto Ali
ID: 23303101
SL: 12
*/
#include <stdio.h>
int main() {
    int math_marks, physics_marks, chemistry_marks;
    // Input marks for each subject
    printf("Enter marks in Mathematics: ");
    scanf("%d", &math_marks);
    printf("Enter marks in Physics: ");
    scanf("%d", &physics_marks);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry_marks);
    if (math_marks >= 60 && physics_marks >= 50 && chemistry_marks >= 40 && (math_marks + physics_marks + chemistry_marks) >= 200) {
        printf("Eligible for admission.\n");
    } 
    else if ((math_marks + physics_marks) >= 150) {
        printf("Eligible for admission.\n");
    } 
    else {
        printf("Not eligible for admission.\n");
    }
    return 0;
}
