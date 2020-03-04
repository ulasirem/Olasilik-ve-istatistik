#include<stdio.h>
int main()
{
	int faktoriyel(int n)	//faktoriyel adýnda bir foksiyon yazýldý
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
	scanf("%d",&n); scanf("%d",&r);	//permütasyon için dýþardan deðer alýndý
	perm=faktoriyel(n)/faktoriyel(n-r);	//permüstasyon hesaplandý
	printf("P(%d,%d): %d",n,r,perm);
	
	getchar();
	return 0;
}
