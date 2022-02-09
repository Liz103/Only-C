#include<stdio.h>
#include<math.h>

int main(){

    int mang[10];
     printf("Nhap cac phan tu cua mang tren \n");
     for(int i=0; i<10; i++){
         printf("a[%d]= ", i);
         scanf("%d", &mang[i]);
     }
    int max=mang[0];
    for(int i=1; i<10; i++){
        if(mang[i]>max)
            max=mang[i];
    }
    printf("so lon nhat trong mang la %d", max);

    return 0;
}