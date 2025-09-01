#include <stdio.h>

int main() {
	float a1,a2,v1,v2,v;
	int c1,c2,n1,n2;
	scanf("%d%d%f",&c1,&n1,&a1);
	scanf("%d%d%f",&c2,&n2,&a2);
	v1=n1*a1;
	v2=n2*a2;
	v=v1+v2;
	printf("VALOR A PAGAR: R$ %.2f\n",v);
	return 0;

}

