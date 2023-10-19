#include<stdio.h>
#include<conio.h>
#include<math.h>
void CalculateRoots(float a,float b,float c){
    int D=pow(b,2)-4*a*c;
    int r1,r2;
    if(D>0){
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("Two roots are different:\n");
        printf("r1=%.2f\n r2=%.2f",r1,r2);
    }
    else if(D==0){
        r1=r2=-b/2*a;
        printf("Two roots are equal:\n");
        printf("r1=%.2f\n r2=%.2f",r1,r2);
    }
    else{
        float rp=-b / (2 * a);
        float ip=sqrt(-D)/(2*a);
        printf("Two roots are imaginary:\n");
        printf("rp=%.2f\n ip=%.2f",rp,ip);
    }
}
int main(){
    float a,b,c;
    printf("Enter three coeff:\n");
    scanf("%f %f %f",&a,&b,&c);
    CalculateRoots(a,b,c);
    getch();
    return 0;

}