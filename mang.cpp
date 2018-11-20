#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
void Init(int B[], int n){
	printf("Nhap mang: \n");
	for(int i=0;i<n;i++)
	{
		printf("B[%d] = ", i);
		scanf("%d", &B[i]);
	}
}

void Display(int B[], int n){
	for(int i = 0; i < n; i++) 
	printf("B[%d] = ", i);
	printf("%d\t", B[i]);
}

float Average(int B[], int n){
	float s = 0;
	for(int i = 0; i < n; i ++) s += B[i]; 
	return s / n;
}

void Dec(int B[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(B[i] > B[j]){
				int temp = B[i];
				B[i] = B[j];
				B[j] = temp;
			}
		}
	}
}

main(){
	int n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int B[n], x;
	Init(B, n);
	printf("Mang vua nhap: ");
	Display(B, n);
	printf("\nTrung binh cong gia tri cac phan tu trong mang la: %f", Average(B, n));
	Dec(B, n);
	printf("\nMang sau khi sap xep tang dan: ");
	Display(B, n);
	return 0;
}
