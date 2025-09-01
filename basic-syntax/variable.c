#include <stdio.h>

int main() {

    int a;
    a = 10;

    printf("a : %d \n", a);

    int b;
    b = 127;

    printf("Converting %d to Octal : %o \n", b, b);
    printf("Converting %d to Decimal : %d \n", b, b);
    printf("Converting %d to Hexadecimal : %x \n", b, b);


    float f_num = 3.141592f;
    double d_num = 3.141592;
    int i_num = 123;
    
    printf("f_num : %f \n", f_num);
    printf("d_num : %f \n", d_num);
    
    printf("=================== \n");
    
    printf("f_num.2f : %f \n", f_num);
    printf("i_num5d : %5d \n", i_num);
    printf("d_num6.3f : %6.3f \n", d_num);

    return 0;
}
