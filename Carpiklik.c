#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	printf("Kac Adet Sayi Girilcek:");
	scanf("%d",&n);	//girilecek eleman sayýsýný aldýk
	int d[n];		//eleman sayýsý kadar dzi oluþturduk
	for(i=0;i<n;i++)	//elemanlarý dýþardan alýp hepsini topladýk
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+d[i];
	}
	float ort,carpiklik=0.0;
	ort=toplam/n;	//aldýðýmýz sayýlarýn ortalamasýný bulduk
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort; //her bir elemandan ortalamayý çýkarýp o elemana atandý
		d[i]=d[i]*d[i]*d[i];	//sonucun 3 üncü kuvveti alýndý
		carpiklik=carpiklik+d[i];	//sonuç çarpýklýða atandý 
	}
	printf("Carpiklik: %f",carpiklik/(n-1));	//çarpýklýðý eleman sayýsýnýn bir eksiðine bölerek Çarpýklýk Ölçütünü bulduk
	
	getchar();
	return 0;
	
	
	
}
