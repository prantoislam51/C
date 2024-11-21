



#include <stdio.h>
int main(){

   int num, count, i, prime;


   for(num = 1; num < 300; num++){
    prime = 1;
        for (i = 0; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d\n", num);
        }
    
   }
    


   
}