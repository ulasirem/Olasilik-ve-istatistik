#include<stdio.h>
int main()
{
	int n,i,j,sayi;
	printf("Kac adet sayi girilecek:");
	scanf("%d",&n);		//eleman say�s� d��ardan al�nd�
	int d[n];			//eleman say�s� kadar bir dizi olu�tu
	
	for(i=0;i<n;i++)	//for d�ng�s� ile her bir indise eleman atand�
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
	}
	for(i=0;i<n-1;i++)		//girilen say�lar k���kten b�y��e s�raland�
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
	if(n%2==0)	//girilen say�lar�n 2 ye b�l�m�nden kalan 0 ise
	{
		int sayi1=d[(n-1)/2];	//eleman say�s�n�n iki orta de�eri al�n�r
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
