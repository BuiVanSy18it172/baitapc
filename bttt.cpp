#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
struct Book{
	char name[50];
	char author[50];
	float price;
	int edn;
};
void NhapSach(struct Book b[], int n)
{
	for(int i=0;i<n;i++)
	{   
	    fflush(stdin);
		printf("\nNhap ten sach: ");
		scanf("%s",&b[i].name);
		printf("nam xuat ban: ");
		scanf("%d",&b[i].edn);
		printf("nhap gia: ");
		scanf("%f",&b[i].price);
		printf("Nhap ten tac gia: ");
		scanf("%s",&b[i].author);
	}
}
void InSach(struct Book b[], int n){
	for(int i=0; i<n;i++){
		printf("\nTen sach la : %s \n", b[i].name);
		printf("Tac gia sach la : %s \n", b[i].author);
		printf("Nam XB sach la : %d \n", b[i].edn);
		printf("Gia sach  %d la : %f \n",i, b[i].price);
		
	}
}
void Searchname(struct Book b[],int n, char x[50])
{
	for(int i=0; i<n;i++)
	{
		if(strstr(b[i].name,x)!=NULL)
		{
			fflush(stdin);
			InSach(b,n);
		}
	}
}
float Giamin(struct Book b[],int n)
{
	int min=b[0].price;
	for(int i=0;i<n;i++)
	{
		if(min>b[i].price) 
		min=b[i].price;
	}
	return min;
}
void Insachre(struct Book b[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(Giamin(b,n)==b[i].price)
		{
			InSach(b,n);
		}
	}
}
int main(){
	struct Book b[100];
	int n;
	char x[50];
	printf("nhap n: ");
	scanf("%d",&n);
	NhapSach(b,n);
	InSach(b,n);
	fflush(stdin);
	printf("Nhap ten sach can tim \n");
	gets(x);
	Searchname(b,n,x);
	fflush(stdin);
	printf("thong tin sach re nhat: ");
	Insachre(b,n);
}
