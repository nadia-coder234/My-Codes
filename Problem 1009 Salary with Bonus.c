#include<stdio.h>
int main(){
    char name[100];
    double f,a;
    scanf("%s%lf%lf",&name,&f,&a);
    double n=a*0.15;
    double t=n+f;
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}
