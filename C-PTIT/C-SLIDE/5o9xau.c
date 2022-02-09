#include<stdio.h>
#include<string.h>
#include<conio.h>

void daoChuoi(char *string, int kichThuoc){
    char du;
     for(int i=0; i<=kichThuoc/2; i++){
         du=string[i];
         string[i]=string[kichThuoc-i-1];
         string[kichThuoc-i-1]=du;
     }
    printf("%s \n", string);

}

int main(){

    char string[100], string2[200]="nguyen huu toan";
    printf("Nhap vao 1 chuoi co so ki tu nho hon 100 ");
    fgets(string, 100, stdin);  // Cách lưu vào 1 chuỗi chứa dấu cách
    printf("%s \n", string);

    daoChuoi(string2, 15);
    daoChuoi(string2, 15);

   /*
    string[4]='\0'; // \0 là kí tự kết thúc chuỗi
    puts(string);  // Một cách khác để xuất mảng
    */

    // Một số hàm xử lí chuỗi cơ bản
   printf("%d \n", strlen(string));    // Chiều dài chuỗi
   printf("%s ", strupr(string));    // In hoa toàn chuỗi
   printf("%s \n", strlwr(string));    // In thường toàn chuỗi

   printf("So sanh chuoi: %d %d \n", strcmp(string, string2), strnicmp(string, string2, 100) );  // So sánh chuỗi phân biệt chữ hoa và không
                                     // Ghép chuỗi
    strcpy(string, string2);           // Ghép toàn bộ
    printf ("%s\n", string);   
    strncpy(string, string2, 3);      // Ghép 1 phần     
    printf("%s\n", string);                                   
                        
    printf("%s\n", strdup(string2));                     // Tạo chuỗi mới từ chuỗi đã cho
    printf("%s\n", strcat(string, string2))    ;         // Nối chuỗi
                                                         // Tách chuỗi
    printf("%c\n", strchr(string, 27));             // Tìm 1 kí tự trên chuỗi
    printf("%s\n", strstr(string, "lam"));         // Tìm 1 đoạn kí tự trên chuỗi


    return 0;
}