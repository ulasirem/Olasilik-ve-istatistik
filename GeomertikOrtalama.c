#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i,carp=1;
	double sonuc;
	printf("Kac adet sayi girilecek:");
	scanf("%d",&n);		//eleman sayýsý dýþardan alýndý 
	int d[n];			//eleman sayýsý kadar bir dizi oluþtu
	for(i=0;i<n;i++)	//for döngüsü ile her bir indise eleman atandý 
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		carp=carp*d[i];	//her bir eleman çarpýlarak carp a atandý
	}
	
	sonuc= pow((double)carp,(double) 1/n);	//carp ýn girilen n kadar sayýnýn kökünü alýr
	printf("carpim:%d sonuc= %.3f",carp,sonuc);	//virgülden sonra 3 basamak gösterecek þekilde sonucu bastýrýr
	getchar();
	return 0;
}

