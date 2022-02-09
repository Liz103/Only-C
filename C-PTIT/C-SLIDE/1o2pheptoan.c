#include <stdio.h>
#include <math.h>

int main(){

    double so1, so2;
    printf("Nhap vao 2 so bat ki! ");
    scanf("%lf %lf", &so1, &so2);

    printf("Tong cua 2 so la %.0f \n", so1+so2);
    printf("Hieu cua 2 so la %.0f \n", so1-so2);
    printf("Tich cua 2 so la %.0f \n", so1*so2);
    printf("Thuong cua 2 so la %.2f \n", so1/so2);

    return 0;
}
