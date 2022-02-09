#include<stdio.h>
#include<math.h>

int main(){

    double banKinh;
    printf("Nhap ban kinh cua duong tron ! \n");
    scanf("%lf", &banKinh);

    printf("Chu vi cua hinh trin la %.2f \n", 2*banKinh*3.14);
    printf("Dien tich cua hinh tron la %.2f \n", banKinh*banKinh*3.14);
    
    return 0;

}
