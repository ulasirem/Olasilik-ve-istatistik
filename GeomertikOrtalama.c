#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i,carp=1;
	double sonuc;
	printf("Kac adet sayi girilecek:");
	scanf("%d",&n);		//eleman say�s� d��ardan al�nd� 
	int d[n];			//eleman say�s� kadar bir dizi olu�tu
	for(i=0;i<n;i++)	//for d�ng�s� ile her bir indise eleman atand� 
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		carp=carp*d[i];	//her bir eleman �arp�larak carp a atand�
	}
	
	sonuc= pow((double)carp,(double) 1/n);	//carp �n girilen n kadar say�n�n k�k�n� al�r
	printf("carpim:%d sonuc= %.3f",carp,sonuc);	//virg�lden sonra 3 basamak g�sterecek �ekilde sonucu bast�r�r
	getchar();
	return 0;
}

