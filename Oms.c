#include<stdio.h>
int main()
{
	int n,i,toplam=0;
	printf("Kac Sayi Girilecek:");
	scanf("%d",&n);		//eleman say�s� d��ardan al�nd� 
	int d[n];			//eleman say�s� kadar bir dizi olu�tu
	for(i=0;i<n;i++)	//for d�ng�s� ile her bir indise eleman atand�
	{
		printf("%d sayiyi girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+d[i];	//her bir eleman toplan�p toplam a atand�
	}
	float ort=toplam/n;		//elemanlar�n ortalamas� bulunudu
	for(i=0;i<n;i++)
	{
		d[i]=d[i]-ort;	//her bir say� ortalamadan ��kart�ld�
	}
	float muttop=0.0;
	for(i=0;i<n;i++)
	{
		muttop=muttop+fabs(d[i]);	//bu say��ar�n mutlak de�erleri al�narak muttop a atand�
	}
	printf("%f",muttop);
	 
	printf("Ortalama Mutlak Sapma: %f",muttop/n);	//OMS muttopun n adet say�ya b�l�nmesiyle bulundu
	
	getchar();
	return 0;
}
