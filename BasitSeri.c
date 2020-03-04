#include<stdio.h>
int main()
{
	int n,i,j,sayi;
	printf("Kac adet sayi girilecek:");  
	scanf("%d",&n);		//eleman sayýsý dýþardan alýndý 
	int d[n];			//diziye atandý
	
	for(i=0;i<n;i++)   //dizideki eleman sayýsý kadar eleman dýþardan alýndý
	{
		printf("%d. sayiyi girin:",i+1);
		scanf("%d",&d[i]);
	}
	for(i=0;i<n-1;i++)  //dizideki elemanlarý küçükten büyüðe doðru sýralarýz
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
	for(i=0;i<n;i++)	//sýraladýðýmýz elemanlarý bastýrýrýz
	{
		printf("%d\n",d[i]);
	}
	printf("\n\n");

	
	getchar();
	return 0;
}
