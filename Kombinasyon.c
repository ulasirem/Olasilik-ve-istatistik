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
	int n,r,i,kom;
	printf("C(n,r) Girin:");	
	scanf("%d",&n); scanf("%d",&r); //kombinasyon için dýþardan deðer alýndý
	kom=faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r)); 	//n in faktoriyeli bölü r nin faktoriyeli çarpý n-r nin faktoriyelini bulur
	printf("C(%d,%d): %d",n,r,kom);		//sonucu bastýrýr
	
	getchar();
	return 0;
}
