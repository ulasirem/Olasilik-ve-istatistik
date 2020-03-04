#include<stdio.h>
int main()
{
	int n,i;
	float toplam=0.0;
	printf("Kac Adet Sayi Girilecek:");
	scanf("%d",&n);			//eleman sayýsý dýþardan alýndý
	int d[n];				//eleman sayýsý kadar bir dizi oluþtu
	for(i=0;i<n;i++)	//for döngüsü ile her bir indise eleman atandý 
	{
		printf("%d. Sayiyi Girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+(1/(float)d[i]);	//her bir sayýyý paydaya atarak toplar 
	}
	printf("Dizinin Harmonik Ortalamasi: %f",n/toplam);	//eleman sayýyýsýna toplam sonucunu böler	
	getchar();
	return 0;
}
