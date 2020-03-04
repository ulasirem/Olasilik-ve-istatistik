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
		d[i]=d[i]-ort;	//her bir sayý ortalamadan çýkartýldý ve her birinin karesi alýndý
		d[i]=d[i]*d[i];
	}
	
	for(i=0;i<n;i++)
	{
		toplam=toplam+d[i];		//sayýlarýn her biri topandý
	}
	orneklem=toplam/(n-1);		//toplam eleman saysýýn bir eksiðine bölünerek örneklem bulundu
	printf("Orneklem Varyansý: %f\n\n",orneklem);

	getchar();
	return 0;
}
