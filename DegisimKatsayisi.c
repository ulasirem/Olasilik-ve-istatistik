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
		d[i]=d[i]-ort;		//her bir elemandan ortalamay� ��kar�p o elemana atand�
		d[i]=d[i]*d[i];	   //sonucun 2 nci kuvveti al�nd� 
	}
	
	for(i=0;i<n;i++)
	{
		toplam=toplam+d[i];	//her bir indisteki elemanlar topland� 
	}
	orneklem=toplam/(n-1);	//toplam eleman say�s�n�n bir eksi�ine b�l�nerek ornekleme atand�		
	printf("Standart Sapmasi: %f",sqrt(orneklem));	//orneklemin k�k� al�narak Standart Sapma bulundu

	printf("Degisim Katsayisi: %f",sqrt(orneklem)/ort);	//orneklemin k�k� al�n�p ortamaya b�l�nerek De�i�im Katsay�s� bulundu
	getchar();
	return 0;
}
