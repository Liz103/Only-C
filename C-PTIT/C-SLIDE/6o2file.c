#include<stdlib.h>
#include<stdio.h>

int main(){

    char string[]="Tran Thi Anh Hong";
    FILE* taptin;
    
    taptin= fopen("fileghi.txt", "w+");
    if (taptin==NULL){
       fclose(taptin);
    }

    fputc('L', taptin);
    fputc('\n', taptin);

    fputs("Nguyen Thi Thanh Lam da mo", taptin);
    fputs("\nDay la ten me cua Lam: Nguyen Thi Thao", taptin);
    
    fprintf(taptin, "\nDay la ten chi Lam: %s", string );

    fclose(taptin);
    return 0;
}