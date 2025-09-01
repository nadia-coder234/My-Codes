#include <stdio.h>

int main() {
	float a,b;
	scanf("%f%f",&a,&b);
	float w1=3.5,w2=7.5;
	float av=((a*w1)+(b*w2))/(w1+w2);
	printf("MEDIA = %.5f\n",av);
	return 0;

}

