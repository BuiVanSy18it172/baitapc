#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h> 
void NhapMang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
}
void InMang(int mang[100],int n){
	for(int i=0;i<n;i++){
		printf("\nmang[%d]=%d",i,mang[i]);
	}
}

int GiaiThua(int n)
{	int gt=1;
	for(int j=1; j<=n; j++)
	{
		gt=gt*j;
	}
	return gt;
}
float TinhTong(int a[100], int n)
{
	int tong=0;
	float gt;
	for(int j=0; j<n; j++)
	{
		gt=GiaiThua(a[j]);
		tong=tong+gt;
	}
	printf("%d",tong);
}
int main(){
	int mang[100];
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	
	printf("\nNhap Gia Tri Cho Mang:\n");
	NhapMang(mang,n);
	printf("\nGia Tri Cua Mang la:\t");
	InMang(mang,n);
	printf("\nTong Cac Giai Thua Cac Gia Tri Ban Vua Nhap La: "); 
	TinhTong(mang,n);
	
	float somoi,socu,tongtien=0,tieuthu;
	printf("\nnhap so cu= \n");
	scanf("%f",&socu);
	printf("nhap so moi= \n");
	scanf("%f",&somoi);
	if(somoi>socu) 
	{
	tieuthu=somoi-socu;
	if(tieuthu<50) tongtien=tieuthu*1500;
	else if(tieuthu>=50&&tieuthu<=100) tongtien=49*1500+(tieuthu-49)*2000;
	else if(tieuthu>100) tongtien=49*1500+51*2000+(tieuthu-100)*3000;
	printf("\ntien dien la: %f",tongtien);
}
	else printf("so moi nho hon hoac bang so cu"); 
}
