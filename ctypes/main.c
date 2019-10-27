#include <stdio.h>  // provides printf
#include <stdlib.h> // provides malloc

static int a =3;

int main(){
    char* c = (char*)malloc(10*sizeof(char));
    printf("%p\n",&a);
}
