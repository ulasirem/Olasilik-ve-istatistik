#include<stdio.h>
int main()
{
	int n,i,j,sayi;
	printf("Kac adet sayi girilecek:");  
	scanf("%d",&n);		//eleman say�s� d��ardan al�nd� 
	int d[n];			//diziye atand�
	
	for(i=0;i<n;i++)   //dizideki eleman say�s� kadar eleman d��ardan al�nd�
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
	}
	for(i=0;i<n-1;i++)  //dizideki elemanlar� k���kten b�y��e do�ru s�ralar�z
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
	for(i=0;i<n;i++)	//s�ralad���m�z elemanlar� bast�r�r�z
	{
		printf("%d\n",d[i]);
	}
	printf("\n\n");

	
	getchar();
	return 0;
}
