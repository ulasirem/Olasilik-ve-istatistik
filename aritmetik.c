#include<stdio.h>
int main()
{
	int i,n,topla=0;
	printf("Kac adet sayi girilsin:");
	scanf("%d",&n);		//dýþardan kaç adet sayý girileceði alýndý 
	int d[n];			//kaç adet sayý alýnacaðý diziye atandý
	for(i=0;i<n;i++)	//for döngüsüü ile dizideki her bir indise eleman atamasý yapýldý
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);		
	}
	for(i=0;i<n;i++)	//diziye atanan elemanlar toplandý
	{
		topla=topla+d[i];
	}
	float sonuc=topla/n;	//elemanlarýn toplamý eleman sayýsýna bölündü 
	printf("%d adet sayinin aritmetik ortalamasi:%f",n,sonuc);	//sonuç bastýrýldý
	
	getchar();
	return 0;
	
}
