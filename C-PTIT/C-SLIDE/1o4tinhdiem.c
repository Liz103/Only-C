#include<stdio.h>
#include<math.h>

int main(){

    double toan, li, hoa;
    printf("Nhap diem Toan, Li, Hoa cua ban !\n");
    scanf("%lf %lf %lf", &toan, &li, &hoa);

    printf("Diem trung binh cua ban la %.2f", (toan+li+hoa)/3);

    return 0;

}

