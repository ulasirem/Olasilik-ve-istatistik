#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	printf("Kac Adet Sayi Girilcek:");	
	scanf("%d",&n);			//eleman say�s� d��ardan al�nd� 
	int d[n];				//eleman say�s� kadar bir dizi olu�tu
	for(i=0;i<n;i++)		//for d�ng�s� ile her bir indise eleman atand�
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+d[i];	//her bir eleman toplan�p toplam a atand� 
	}
	float ort,basiklik=0.0;
	ort=toplam/n;   		//elemanlar�n ortalamas� bulunudu
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort;		//her bir elemandan ortalamay� ��kar�p o elemana atand� 	
		d[i]=d[i]*d[i]*d[i]*d[i]; //sonucun 4 �nc� kuvveti al�nd� 
		basiklik=basiklik+d[i];		//sonu� bas�kl�k �l���t�ne atand� (her eleman i�in yap�l�r)
	}
	printf("Basiklik: %f",basiklik/(n-1)); //bas�kl�k ile buldu�umuz sonu� eleman say�y�s�n bir eksi�ine b�l�nd� Bas�kl�k �l��t� bulundu
	
	getchar();
	return 0;
	
	
	
}
