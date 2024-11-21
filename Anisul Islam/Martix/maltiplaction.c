


#include <stdio.h>
int main(){
    int firstArr [10] [10];
    int secoundArr [10] [10];
    int multiArr [10][10];
    int c1;
    int r1;

    int c2;
    int r2;
    int sum = 0;
    printf("Enter the first Martix Row and Col : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the Secound Martix Row and Col : ");
    scanf("%d %d",&r2,&c2);

    while (c1 != r2)
    {
        printf("Error First Martix colam And 2nd Rows: Try Again");

        printf("Enter the first cloll One : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter the first cloll One : ");
        scanf("%d %d",&r2,&c2);
    }

    // Input  First Martix---
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            printf("Inter First The Number [%d][%d]",i,j);
            scanf("%d",&firstArr[i][j]);
        }
    }

    // Input  Secound Martix---
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            printf("Inter The Secound Number [%d][%d]",i,j);
            scanf("%d",&secoundArr[i][j]);
        }
    }


     // Our Put First Martix---
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c1; j++){
            printf(" %d ",firstArr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n\n");

    // Out put Secound Martix
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            printf(" %d ",secoundArr[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\n\n\n");

 //Multiplex 

    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            for (int k = 0; k < c1; k++){
                sum = sum + firstArr[i][k] * secoundArr[k][j];   
            }
            multiArr[i][j] = sum;
            sum = 0;
        }
    }

// Result Section
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            printf(" %d ",multiArr[i][j]);
        }
        printf("\n");
    }
    



}