#include<stdio.h>
#include<math.h>
double CalcMean(double a[],float n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    double avg= sum/n;
    return avg;
}
double Calc_Std_deviation(double a[],float n, double M){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=pow((a[i]-M),2);
    }
    double d=sqrt(sum/n);
    return d;
}
int main(){
    float n;
    scanf("%f",&n);
    double a[(int) n];
    int i;
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    double M=CalcMean(a,n);
    double d=Calc_Std_deviation(a,n,M);
    printf("%.2lf\n",d);
    
}