#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	printf("Kac Adet Sayi Girilcek:");	
	scanf("%d",&n);			//eleman sayýsý dýþardan alýndý 
	int d[n];				//eleman sayýsý kadar bir dizi oluþtu
	for(i=0;i<n;i++)		//for döngüsü ile her bir indise eleman atandý
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+d[i];	//her bir eleman toplanýp toplam a atandý 
	}
	float ort,basiklik=0.0;
	ort=toplam/n;   		//elemanlarýn ortalamasý bulunudu
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort;		//her bir elemandan ortalamayý çýkarýp o elemana atandý 	
		d[i]=d[i]*d[i]*d[i]*d[i]; //sonucun 4 üncü kuvveti alýndý 
		basiklik=basiklik+d[i];		//sonuç basýklýk ölüçütüne atandý (her eleman için yapýlýr)
	}
	printf("Basiklik: %f",basiklik/(n-1)); //basýklýk ile bulduðumuz sonuç eleman sayýyýsýn bir eksiðine bölündü Basýklýk Ölçütü bulundu
	
	getchar();
	return 0;
	
	
	
}
