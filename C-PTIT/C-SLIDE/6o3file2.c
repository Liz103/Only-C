#include<stdio.h>
#include<stdlib.h>
#define SO_KI_TU_DUOC_DOC 20

int main(){

    int kiTuHienTai=0 ;
    int toan, van;
    char string2[SO_KI_TU_DUOC_DOC];
    FILE* taptin;

    taptin = fopen("filedoc.txt", "r+");
    fscanf(taptin, "%d %d", &toan, &van);
    printf("Diem Toan, Van lan luot la: %d %d\n", toan, van);
/*
    do{
        kiTuHienTai= fgetc(taptin);
        printf("%c", kiTuHienTai);
    }while (kiTuHienTai!=EOF); // Doc den khi gap \0

    fgets(string2, SO_KI_TU_DUOC_DOC, taptin);
    printf("%s\n", string2);  // Doc den khi gap \n
*/

    fclose(taptin);
    return 0;
}