

#include <stdio.h>
int main(){
    int first_Matrix [10][10];
    int secound_Matrix [10][10];
    int third_Matrix [10][10];
    int sum = 0;

    int row_one,colam_one,row_two,colam_two;
    printf("Inter The First Matrix Row: ");
    scanf("%d",&row_one);
    printf("Inter The First Matrix Colam: ");
    scanf("%d",&colam_one);
    printf("Inter The Secound Matrix Row: ");
    scanf("%d",&row_two);
    printf("Inter The Secound Matrix Colam: ");
    scanf("%d",&colam_two);

    // Loop-------
    while (colam_one != row_two){
        printf("Inter The First Matrix Row: ");
        scanf("%d",&row_one);
        printf("Inter The First Matrix Colam: ");
        scanf("%d",&colam_one);
        printf("Inter The Secound Matrix Row: ");
        scanf("%d",&row_two);
        printf("Inter The Secound Matrix Colam: ");
        scanf("%d",&colam_two);
    }

    //=========== Input Section =========

    // First Matrix------
    for (int i = 0; i < row_one; i++){
        for (int j = 0; j < colam_one; j++){
            printf("Inter The First Matrix Element [%d] [%d] = ",i,j);
            scanf("%d",&first_Matrix[i][j]);
        }
        
    };

    // Secound Matrix
    for (int i = 0; i < row_two; i++){
        for (int j = 0; j < colam_two; j++){
            printf("Inter The secound Matrix Element [%d] [%d] = ",i,j);
            scanf("%d",&secound_Matrix[i][j]);
        }
    }

    printf("\n\n");

    // ========= Output Section =============
    // First Matrix

    for (int i = 0; i < row_one; i++){
        for (int j = 0; j < colam_one; j++){
            printf("%d ",first_Matrix[i][j]);
        }
        printf("\n"); 
    }

    printf("\n");
    
    // Secound Matrix

    for (int i = 0; i < row_two; i++){
        for (int j = 0; j < colam_two; j++){
            printf("%d ",secound_Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");



    // =======  Multiplication Section  =========

    for (int i = 0; i < row_one; i++){
        for (int j = 0; j < colam_two; j++){
            for (int k = 0; k < colam_one; k++){
                sum = sum + first_Matrix[i][k] * secound_Matrix[k][j];
            }
            third_Matrix[i][j] = sum;
            sum = 0;
        }
    }


    // ==== Printf Matrix ======
    for (int i = 0; i < row_one; i++){
        for (int j = 0; j < colam_two; j++){
            printf("%d ",third_Matrix[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    





    
    
    
}