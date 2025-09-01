#include <stdio.h>

int main() {
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double z=b*b-4*a*c;
	if(z<0||a==0){
	    printf("Impossivel calcular\n");
	}

else{
	    double q=sqrt(z);
	double r1=(-b+q)/(2*a);
	double r2=(-b-q)/(2*a);
	    printf("R1 = %.5lf\n",r1);
	    printf("R2 = %.5lf\n",r2);
	}
return 0;


}
