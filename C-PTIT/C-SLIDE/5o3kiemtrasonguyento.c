#include<stdio.h>
#include<math.h>

void soNguyenTo(int so){

    int dem=0;
    for(int i=1; i<so;i++){
        if(so%i==0)
            dem++;
    }
    if(dem>1){
        printf("%d khong la so nguyen to", so);
    }else{
        printf("%d la so nguyen to", so);
    }
}

int main(){

    int so;
    printf("Nhap vao so bat ki ");
    scanf("%d", &so);

    soNguyenTo(so);

    return 0;
}



