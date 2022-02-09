#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void timKiem(int array[], int kichThuocMang, int phanTu){

     for(int i=0; i<kichThuocMang; i++){
        if(array[i]==phanTu){
            printf("Vi tri dau tien cua %d la %d", phanTu, i);
            break;
        }
     }
}

int main(){

    int phanTu;
    int mang[10]={3,5,67,3,6,0,5,6,12,111};
    printf("Nhap vap phan tu can tim ");
    scanf("%d", &phanTu);

    timKiem(mang, 10, phanTu);

    return 0;
}