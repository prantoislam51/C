
// Array User Input 
// #include <stdio.h>
// int main(){
//     int x[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Inter array %d number: ", i);
//         scanf("%d", &x[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", x[i]);
//     }
//     printf("%d",sizeof(x));
// }


// Get Array Size
// #include <stdio.h>
// int main(){
//     int x[] = {10,20,41,56,88,45};
//     printf("%lu",sizeof(x) / sizeof(x[0]));
// }

// Get User array size / Enter the size of the array And  Get Array Size or Length 
#include <stdio.h>
int main(){
int array_value;
printf("Enter the size of the array: ");
scanf("%d",&array_value);
int x[array_value];
for (int i = 0; i < array_value; i++)
{
    printf("Inter array %d Number: ",i);
    scanf("%d", &x[i]);
};
int length = sizeof(x) / sizeof(x[0]);
for (int i = 0; i < length; i++)
{
    printf("Your Array :%d \n",x[i]);
}

}








