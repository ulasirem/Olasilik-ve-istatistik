#include<stdio.h>
int main()
{
	int faktoriyel(int n)	//faktoriyel ad�nda bir foksiyon yaz�ld�
	{
		int i,f=1;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		return f;
	}
	int n,r,i,kom;
	printf("C(n,r) Girin:");	
	scanf("%d",&n); scanf("%d",&r); //kombinasyon i�in d��ardan de�er al�nd�
	kom=faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r)); 	//n in faktoriyeli b�l� r nin faktoriyeli �arp� n-r nin faktoriyelini bulur
	printf("C(%d,%d): %d",n,r,kom);		//sonucu bast�r�r
	
	getchar();
	return 0;
}
