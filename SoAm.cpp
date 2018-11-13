#include <stdio.h> 
#include <conio.h> 
#include <math.h>
# include<string.h>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void NhapMang(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("mang arr[%d]=",i);
		scanf("%d",arr+i);
	
	}
}
void InMang(int *arr,int n){
	for(int i=0;i<n;i++)
	printf("\narr[%d]=%d",i,*(arr+i));
}
int AmDT(int a[], int n)
{
   for (int i=0; i<n; i++)
      if (a[i]<0)
         return printf("\nGia tri am dau tien la %d", a[i]);
   return printf("\nkhong co gia tri nao am nen tra ve -1");
}
void DemSoAm(int a[], int n){
	int  Dem=0;
	for(int i=0; i<n; i++){
		if(a[i]<0 && a[i]>-10)
			Dem = Dem + 1;
	}
	printf("\nSo gia tri am la %d",Dem);
}
void Tong(int a[],int n){
	int S=0;
	for(int i=0;i<n;i++){
		if(i%2!=0)
			S=S+a[i];
	}
	printf("\nTong gia tri cac mang vi tri chan la: %d",S);
}
main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int *p = (int *)malloc(n*sizeof(int));
	NhapMang(p,n);
	InMang(p,n);
	AmDT(p,n);
	DemSoAm(p,n);
	Tong(p,n);
}


