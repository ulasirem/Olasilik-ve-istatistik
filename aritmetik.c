#include<stdio.h>
int main()
{
	int i,n,topla=0;
	printf("Kac adet sayi girilsin:");
	scanf("%d",&n);		//d��ardan ka� adet say� girilece�i al�nd� 
	int d[n];			//ka� adet say� al�naca�� diziye atand�
	for(i=0;i<n;i++)	//for d�ng�s�� ile dizideki her bir indise eleman atamas� yap�ld�
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);		
	}
	for(i=0;i<n;i++)	//diziye atanan elemanlar topland�
	{
		topla=topla+d[i];
	}
	float sonuc=topla/n;	//elemanlar�n toplam� eleman say�s�na b�l�nd� 
	printf("%d adet sayinin aritmetik ortalamasi:%f",n,sonuc);	//sonu� bast�r�ld�
	
	getchar();
	return 0;
	
}
