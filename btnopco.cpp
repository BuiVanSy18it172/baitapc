#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
    char Chuoi[1000];
    int Sokitu;
    printf("Nhap chuoi: ");gets(Chuoi);
    Sokitu = strlen(Chuoi);
    printf("chuoi co do dai(ca khoang trang)la %d",Sokitu);
    getch();
    return 0;
}
