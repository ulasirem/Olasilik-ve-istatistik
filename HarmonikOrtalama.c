#include<stdio.h>
int main()
{
	int n,i;
	float toplam=0.0;
	printf("Kac Adet Sayi Girilecek:");
	scanf("%d",&n);			//eleman say�s� d��ardan al�nd�
	int d[n];				//eleman say�s� kadar bir dizi olu�tu
	for(i=0;i<n;i++)	//for d�ng�s� ile her bir indise eleman atand� 
	{
		printf("%d. Sayiyi Girin:",i+1);
		scanf("%d",&d[i]);
		toplam=toplam+(1/(float)d[i]);	//her bir say�y� paydaya atarak toplar 
	}
	printf("Dizinin Harmonik Ortalamasi: %f",n/toplam);	//eleman say�y�s�na toplam sonucunu b�ler	
	getchar();
	return 0;
}
