#include<stdio.h>
#include<math.h>

int main(){

    int mang[10];
     printf("Nhap cac phan tu cua mang tren \n");
     for(int i=0; i<10; i++){
         printf("a[%d]= ", i);
         scanf("%d", &mang[i]);
     }
    int dem;
     for(int i=0; i<10; i++){
         for(int j=0; j<9; j++){
             if (mang[j]<mang[j+1]){
                 dem=mang[j];
                 mang[j]=mang[j+1];
                 mang[j+1]=dem;
             }
         }
     }
    for(int i=0; i<10; i++)
     printf("%d ", mang[i]);

    return 0;
}