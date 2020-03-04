#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,topla=0;
	float toplam=0;
	printf("Kac adet sayi girilsin:");
	scanf("%d",&n);		//eleman sayýsý dýþardan alýndý 
	int d[n];			//eleman sayýsý kadar bir dizi oluþtu
	for(i=0;i<n;i++)	//for döngüsü ile her bir indise eleman atandý 
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);	
		topla=topla+d[i];	//her bir eleman toplanýp toplam a atandý
	}
	float ort,orneklem;
	ort=topla/n;		//elemanlarýn ortalamasý bulunudu
	
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort;		//her bir elemandan ortalamayý çýkarýp o elemana atandý
		d[i]=d[i]*d[i];	   //sonucun 2 nci kuvveti alýndý 
	}
	
	for(i=0;i<n;i++)
	{
		toplam=toplam+d[i];	//her bir indisteki elemanlar toplandý 
	}
	orneklem=toplam/(n-1);	//toplam eleman sayýsýnýn bir eksiðine bölünerek ornekleme atandý		
	printf("Standart Sapmasi: %f",sqrt(orneklem));	//orneklemin kökü alýnarak Standart Sapma bulundu

	printf("Degisim Katsayisi: %f",sqrt(orneklem)/ort);	//orneklemin kökü alýnýp ortamaya bölünerek Deðiþim Katsayýsý bulundu
	getchar();
	return 0;
}
