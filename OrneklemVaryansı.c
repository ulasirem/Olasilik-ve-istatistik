#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,topla=0;
	float toplam=0;
	printf("Kac adet sayi girilsin:");
	scanf("%d",&n);		//eleman say�s� d��ardan al�nd�
	int d[n];			//eleman say�s� kadar bir dizi olu�tu
	for(i=0;i<n;i++)	//for d�ng�s� ile her bir indise eleman atand�
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);	
		topla=topla+d[i];	//her bir eleman toplan�p toplam a atand�
	}
	float ort,orneklem;
	ort=topla/n;		//elemanlar�n ortalamas� bulunudu
	
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort;	//her bir say� ortalamadan ��kart�ld� ve her birinin karesi al�nd�
		d[i]=d[i]*d[i];
	}
	
	for(i=0;i<n;i++)
	{
		toplam=toplam+d[i];		//say�lar�n her biri topand�
	}
	orneklem=toplam/(n-1);		//toplam eleman says��n bir eksi�ine b�l�nerek �rneklem bulundu
	printf("Orneklem Varyans�: %f\n\n",orneklem);

	getchar();
	return 0;
}
