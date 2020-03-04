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
		topla=topla+d[i];	//her bir eleman toplanýp topla ya atandý
	}
	float ort,orneklem;
	ort=topla/n;			//elemanlarýn ortalamasý bulunudu
	
	for(i=0;i<n;i++)	//her bir sayý ortalamadan çýkartýldý ve her birinin karesi alýndý
	{
		d[i]=d[i]-ort;
		d[i]=d[i]*d[i];
	}
	
	for(i=0;i<n;i++)	//sayýlarýn her biri topandý
	{
		toplam=toplam+d[i];	
	}
	orneklem=toplam/(n-1);	//toplam eleman saysýýn bir eksiðine bölünerek örneklem bulundu
	printf("Standart Sapmasi: %f",sqrt(orneklem));	//örneklemin kare kökü alýnarak Standart Sapma bulundu

	getchar();
	return 0;
}
