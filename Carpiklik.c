#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	printf("Kac Adet Sayi Girilcek:");
	scanf("%d",&n);	//girilecek eleman say�s�n� ald�k
	int d[n];		//eleman say�s� kadar dzi olu�turduk
	for(i=0;i<n;i++)	//elemanlar� d��ardan al�p hepsini toplad�k
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+d[i];
	}
	float ort,carpiklik=0.0;
	ort=toplam/n;	//ald���m�z say�lar�n ortalamas�n� bulduk
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort; //her bir elemandan ortalamay� ��kar�p o elemana atand�
		d[i]=d[i]*d[i]*d[i];	//sonucun 3 �nc� kuvveti al�nd�
		carpiklik=carpiklik+d[i];	//sonu� �arp�kl��a atand� 
	}
	printf("Carpiklik: %f",carpiklik/(n-1));	//�arp�kl��� eleman say�s�n�n bir eksi�ine b�lerek �arp�kl�k �l��t�n� bulduk
	
	getchar();
	return 0;
	
	
	
}
