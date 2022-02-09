#include<stdio.h>
#include<math.h>

int main(){

    char sanPham[11];
    int soLuong;
    double gia;

    printf("Nhap vap ten san pham \n");
    fgets(sanPham, 100, stdin);
    printf("Nhap vao so luong san pham\n");
    scanf("%d", &soLuong);
    printf("Nhap vao gia san pham\n");
    scanf("%lf", &gia);

    printf("%d %s co gia  %.2f dong \n", soLuong,  sanPham,  soLuong*gia);
    printf("Thue gia tri gia tang cua san pham la %.2f dong \n", 0.1*soLuong*gia);

    return 0;

}

