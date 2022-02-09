#include<stdio.h>
#include<math.h>

int main(){

    int so1, so2;
    printf("Nhap vao 2 so bat ki !\n");
    scanf("%d %d", &so1, &so2);

    if(so1>=so2){
        printf("Max= %d", so1);
    }else{
        printf("Max= %d", so2);
    }
    return 0;

}
