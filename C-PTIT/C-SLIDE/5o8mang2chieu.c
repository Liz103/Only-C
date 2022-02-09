
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void nhapMang(int **mang, int hang, int cot){
    for(int i=0; i<hang; i++)
        for(int j=0; j<cot; j++){
            printf("mang[%d][%d] = ", i, j);
            scanf("%d", &mang[i][j]);
        }
}

void xuatMang(int **mang, int hang, int cot){
    printf("Mang: \n");
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++)
            printf("%d ", mang[i][j]);
        printf("\n");
    }
}

void xuatDuongCheoChinh(int **mang, int hang, int cot){
    printf("Duong cheo chinh cua mang la: \n");
    for(int i=0; i<=hang; i++)
        printf("%d ", mang[i][i]);
    printf("\n");
}

void xuatDuongCheoPhu(int **mang, int hang, int cot){
    printf("Duong cheo phu cua mang la: \n");
    for(int i=hang-1; i>=0; i--)
        printf("%d ", mang[i][hang-1-i]);
    printf("\n");
}

void xuatTamGiacTren(int **mang, int hang, int cot){
    printf("Tam giac tren cua mang la: \n");
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            if (i<=j){
                printf("%d ", mang[i][j]);
            }else{
                printf("  ");
            }
        }
    printf("\n");
    }
}

void xuatTamGiacDuoi(int **mang, int hang, int cot){
    printf("Tam giac duoi cua mang la: \n");
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
            if (i>=j){
                printf("%d ", mang[i][j]);
            }else{
                printf(" ");
            }
        }
    printf("\n");
    }
}

int main(){
    int hang, cot; 
    int **mang=NULL;

    printf("Nhap so hang va cot cua ma tran ");
    scanf("%d %d", &hang, &cot);
    mang=(int**)malloc(hang*sizeof(int*));   // Cách cấp phát động mảng 2 chiều sử dụng con trỏ cấp 2
    for(int n=0; n<cot; n++)
        mang[n]=(int*)malloc(cot*sizeof(int));

    nhapMang(mang, hang, cot);
    xuatMang(mang, hang, cot);

    xuatTamGiacTren(mang, hang, cot);
    xuatTamGiacDuoi(mang, hang, cot);

    xuatDuongCheoChinh(mang, hang, cot);
    xuatDuongCheoPhu(mang, hang, cot);

    
    for(int i=0; i<hang; i++)
       free(mang[i]);
    free(mang);
    return 0;
}
