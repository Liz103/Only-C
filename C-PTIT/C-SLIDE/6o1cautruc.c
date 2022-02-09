#include<stdio.h>
#include<stdlib.h>

typedef struct nhanVien{
        int soThuTu;
        char ten[50];
        int namSinh;
        char queQuan[50];
    } thongTinNhanVien;

void nhapThongTin(struct nhanVien *nhanVien){
    printf("Nhap vao so thu tu: ");
    scanf("&d", &nhanVien->soThuTu);
    
    fflush(stdin);
    printf("Nhap ten nhan vien: ");
    gets(nhanVien->ten);

    printf("Nhap vao nam sinh ");
    scanf("%d", nhanVien->namSinh);
    
    fflush(stdin);
    printf("Nhap vao que quan ");
    gets(nhanVien->queQuan);

}
int main(){
    
    // Nhan vien thu nhat
    struct nhanVien nhanVien1 = {1,"Nguyen Thi Thanh Lam", 2003, "Ha Noi"};
    printf("Nhan vien thu nhat: \n%d\n", nhanVien1.soThuTu);
    printf("%s\n", nhanVien1.ten);
    printf("%d\n", nhanVien1.namSinh);
    printf("%s\n", nhanVien1.queQuan);

    // Nhan vien thu 2
    printf("Nhap vao thong tin cua nhan vien thu hai: \n");
    thongTinNhanVien *nhanVien2;
    nhapThongTin(nhanVien2);

    return 0;
}