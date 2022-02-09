#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 3

void xuatMang(int mang[], int kichThuoc){
    for(int i=0; i<kichThuoc; i++)
        printf("%d ", mang[i]);
    printf("\n");
}

int main(){
    
    int *mang=NULL, dem;
     mang=(int*)malloc(N*sizeof(int));
     printf("Nhap cac %d phan tu cua mang tren \n", N);
     for(int i=0; i<N; i++){
         printf("a[%d]= ", i);
         scanf("%d", &mang[i]);
     }
    xuatMang(mang, N);

    int phanTu, viTri;
    printf("Ban muon chen phan tu nao? Vao vi tri nao? ");
    scanf("%d %d", &phanTu, &viTri);
    mang=(int*)realloc(mang, N+1);
    for(int i=N; i>viTri; i--)
        mang[i]=mang[i-1];
    mang[viTri-1]=phanTu;
    xuatMang(mang, N+1);

    printf("Ban muon xoa phan tu o vi tri nao? ");
    scanf("%d", &viTri);
    for(int i=viTri-1; i<=N; i++)
        mang[i]=mang[i+1];
    xuatMang(mang, N);

    free(mang);
return 0;
}