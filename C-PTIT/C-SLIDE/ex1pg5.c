// Tìm ƣớc số chung lớn nhất của hai số tự nhiên m,n.

#include<stdio.h>

int main(){
    int a, b, r;
    printf("Nhap 2 so nguyen duong theo thu tu giam dan: ");
    scanf("%d %d", &a, &b);

    do{
       r=a%b;
       if(r==0){
          printf("Uoc chung lon nhat cua 2 so la: %d", b);
       }else{
          a=b;
          b=r;
       }
    }while (r!=0);

    return 0;
}