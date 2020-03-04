#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	printf("Kac Sayi Girilecek:");
	scanf("%d",&n);		//eleman sayýsý dýþardan alýndý 
	int d[n];			//eleman sayýsý kadar bir dizi oluþtu
	for(i=0;i<n;i++)	//for döngüsü ile her bir indise eleman atandý
	{
		printf("%d sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+d[i];	//her bir eleman toplanýp toplam a atandý
	}
	float ort=toplam/n;		//elemanlarýn ortalamasý bulunudu
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort;	//her bir sayý ortalamadan çýkartýldý
	}
	float muttop=0.0;
	for(i=0;i<n;i++)
	{
		muttop=muttop+fabs(d[i]);	//bu sayýþarýn mutlak deðerleri alýnarak muttop a atandý
	}
	printf("%f",muttop);
	 
	printf("Ortalama Mutlak Sapma: %f",muttop/n);	//OMS muttopun n adet sayýya bölünmesiyle bulundu
	
	getchar();
	return 0;
}
