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
	int n,r,i,perm;
	printf("P(n,r) Girin:");
	scanf("%d",&n); scanf("%d",&r);	//perm�tasyon i�in d��ardan de�er al�nd�
	perm=faktoriyel(n)/faktoriyel(n-r);	//perm�stasyon hesapland�
	printf("P(%d,%d): %d",n,r,perm);
	
	getchar();
	return 0;
}
