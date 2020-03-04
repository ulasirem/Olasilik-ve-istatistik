#include<stdio.h>
int main()
{
	int n,i,j,sayi;
	printf("Kac adet sayi girilecek:");
	scanf("%d",&n);		//eleman sayýsý dýþardan alýndý
	int d[n];			//eleman sayýsý kadar bir dizi oluþtu
	
	for(i=0;i<n;i++)	//for döngüsü ile her bir indise eleman atandý
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
	}
	for(i=0;i<n-1;i++)		//girilen sayýlar küçükten büyüðe sýralandý
	{
		for(j=i+1;j<n;j++)
		{
			if(d[i]>d[j])
			{
				sayi=d[i];
				d[i]=d[j];
				d[j]=sayi;
			}
		}
	}

	int medyan;
	if(n%2==0)	//girilen sayýlarýn 2 ye bölümünden kalan 0 ise
	{
		int sayi1=d[(n-1)/2];	//eleman sayýsýnýn iki orta deðeri alýnýr
		int sayi2=d[((n-1)/2)+1];
		medyan=(sayi1+sayi2)/2;
	}
	else
	{
		medyan=d[n/2];
	}
	printf("Verilen Sayilarin Medyani: %d",medyan);

	
	getchar();
	return 0;
}
