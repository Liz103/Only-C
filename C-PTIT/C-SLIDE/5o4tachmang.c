#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

int soNguyenTo(int so){
    assert(so>0);
    int dem=0;
    for(int i=1; i<so;i++){
        if(so%i==0 )
            dem++;
    }
    if(dem>1){
        return 0;
    }else{
        return 1;
    }
}

void tachMang(int mang[], int mang1[], int mang2[], int kichThuocMang){
    int j=0, k=0;
    // Tách mảng
    for(int i=0; i<kichThuocMang; i++){
        if(soNguyenTo(mang[i])==1){
            mang1[j]=mang[i];
            j++;
        }else{
            mang2[k]=mang[i];
            k++;
        }
    }
    // Xuất mảng
    for(int i=0; i<j; i++)
        printf("%d ", mang1[i]);
    printf("\n");
    for(int i=0; i<k; i++)
        printf("%d ", mang2[i]);
}

int main(){

    int mang[]={3,4,89,8,7,2};
    int *mang1=NULL, *mang2=NULL;

    mang1=(int*)malloc(sizeof(mang));
    mang2=(int*)malloc(sizeof(mang));

    tachMang(mang, mang1, mang2, 6);

    free(mang1);
    free(mang2);

    return 0;
}



