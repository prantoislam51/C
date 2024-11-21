#include <stdio.h>
void fun(char x[]){
    int cha =sizeof (x) / sizeof (x[0]);
    for (char i = 0; i < cha; i++)
    {
        printf("%c", x[i]);
    }
}
int main(){
    fun("Md.Pranto Islam");
    return 0;
}