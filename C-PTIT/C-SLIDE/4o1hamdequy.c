#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int deQuy(int so){
    
    if(so==1){
        return 1;
    }else{
        return so*deQuy(so-1);
    }
}

int main(){

    int so;
    printf("Nhap 1 so bat ki ");
    scanf("%d", &so);

    deQuy(so);
    printf("%d! = %d", so, deQuy(so));

    return 0;
}
