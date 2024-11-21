
/*
    Address = %p. & Variable Name
        Example Address
    printf("%p\n",&x[i]);
*/

// #include <stdio.h>
// int main(){
//     int x[10];
//     for (int i = 0; i < 5; i++){
//        printf("&x[%d] :%p\n",i,&x[i]);
//     }
//     printf("\n %p",x);
//     printf("\n %p",x+2);
// }

/*
        &x[0] = x ;  x[0] = *x        -> Full Array Address;
        &x[1] = x+1 ; x[1] = x+1        -> Array Address + 1;
        &x[2] = x+2 ; x[2] = x+2        -> Array Address + 2;
        &x[3] = x+3 ; x[3] = x+3        -> Array Address + 3;
        &x[4] = x+4 ; x[4] = x+4        -> Array Address + 4;




            Loop
        &x[i] = x   ; x[i] = * x        -> Full Array Address;
        &x[i] = x+1 ; x[i] = x+i        -> Array Address + 1;
        &x[i] = x+2 ; x[i] = x+i        -> Array Address + 2;
        &x[i] = x+3 ; x[i] = x+i        -> Array Address + 3;
        &x[i] = x+4 ; x[i] = x+i        -> Array Address + 4;
    */

//    #include <stdio.h>
// int main(){
//     int x[5] = {10,32,73,32,97};
//     int *pt;
    
//     pt = &x[1];
//     printf("%d \n",*pt);
//     printf("%d \n",*(pt + 1));
//     printf("%d \n",*(pt - 1));
    
    
//     // for (int i = 0; i < 5; i++){
//     //   printf("&x[%d] :%d\n",i,x[i]);
//     // }
// }



