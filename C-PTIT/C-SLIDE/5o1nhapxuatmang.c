#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void nhapXuatMang(int array[], int kichThuocMang){

    for(int i=0; i<kichThuocMang; i++){
        printf("Phan tu %d ", i);
        scanf("%d", &array[i]);
    }
    for(int i=0; i<kichThuocMang; i++){
        printf("%d ", array[i]);
    }

}
int main(){

    int *mang=NULL;
    int kichThuoc;

    printf("Nhap vao so phan tu cua mang ! ");
    scanf("%d", &kichThuoc);
    mang=(int*)malloc(kichThuoc*sizeof(int));

    nhapXuatMang(mang, kichThuoc);

    free(mang);
    return 0;
}



