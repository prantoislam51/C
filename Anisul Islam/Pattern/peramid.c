

// // C program to print the full pyramid pattern of stars 
// #include <stdio.h> 

// int main() 
// { 
// 	int rows = 5; 

// 	// first loop to print all rows 
// 	for (int i = 0; i < rows; i++) { 

// 		// inner loop 1 to print white spaces 
// 		for (int j = 0; j < 2 * (rows - i) - 1; j++) { 
// 			printf(" "); 
// 		} 

// 		// inner loop 2 to print star * character 
// 		for (int k = 0; k < 2 * i + 1; k++) { 
// 			printf("* "); 
// 		} 
// 		printf("\n"); 
// 	} 
// 	return 0; 
// }









#include <stdio.h>
int main(){


    int number = 10;
    for(int i = 0; i < number; i++){

        for (int j = 0; j < 2 * (number - i) - 1; j++){
            printf(" ");
        }

        for (int m = 0; m < 2 * i + 1; m++)
        {
            printf("* ");
        }
        
        printf("\n");
        
    }

    for(int i = number-2; i > 0; i--){

        for (int j = 0; j < 2 * (number - i) - 1; j++){
            printf(" ");
        }

        for (int m = 0; m < 2 * i + 1; m++)
        {
            printf("* ");
        }
        
        printf("\n");
        
    }


}