#include <stdio.h>

int main() {
	float a,b,c,w1,w2,w3,av;
	scanf("%f%f%f",&a,&b,&c);
	w1=2,w2=3,w3=5;
	av=((a*w1)+(b*w2)+(c*w3))/(w1+w2+w3);

	printf("MEDIA = %.1f\n",av);
	return 0;
}
