#include<stdio.h>
#include<conio.h>
int main()
{
	char a[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
	char b[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char c[10][10]={"","twenty","thirty","forty","fifty","sixty","seventy","eight","ninety"};
	int num,r,m,k,l,d,f;
	printf("Enter the number ");
	scanf("%d",&num);
	if(num<10)
	printf("%s",a[num-1]);
	if(num>=10&&num<=99)
	{
		if(num<20)
		{
			r=num%10;
			printf("%s",b[r]);
		}
		else
		{
			r=num/10;
			m=num%10;
			printf("%s %s",c[r-1],a[m-1]);
		}
	}
	else if(num>=100&&num<=999)
	{
		r=num/10;
		m=num%10;
		printf("%s hundred",a[r-1]);
		if(m/10==0)
		printf("%s",a[m%10-1]);
		if(m>=10&&m<20)
		{
			d=d%10;
			printf("%s",b[d]);
		}
		else if(m>=20&&m<=99)
		{
			l=m/10;
			k=m%10;
			printf("%s %s",c[l-1],a[k-1]);
		}
	}
	else if(num>=1000&&num<=9999)
	{
		r=num/1000;
		m=num%1000;
		printf("%s thousand ",a[r-1]);
		d=m/100;
		f=m%100;
		if(d==0)
		{
		printf("");
		if(f/10==0)
		printf("%s",a[f%10-1]);
		if(f>=10&&f<20)
		printf("%s",b[f]);
		else if(f>=20&&f<99)
		{
			l=f/10;
			k=f%10;
			printf("%s %s",c[l-1],a[k-1]);
		}
	}
	else
	{
		printf("%s hundred ",a[d-1]);
		if(f/10==0)
		printf("%s",a[f%10-1]);
		if(f>=10&&f<20)
	     printf("%s",b[f]);
		else if(f>=20&&f<99)
		{
			l=f/10;
			k=f%10;
			printf("%s %s",c[l-1],a[k-1]);
	}
}
}
return 0;
getch();
}
