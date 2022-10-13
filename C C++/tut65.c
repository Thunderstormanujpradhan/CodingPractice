#include <stdio.h>

int fact(float a){
    float x=1;
    for(int j=a;j>=1;j--){
        x=x*j;
    }
    return x;
}
int main()
{
    float n,p=1.0;
    float s=0.0;
    printf("Enter the last term: ");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        s=s+(n/fact(n))*p;
        p=p*-1;
    }
    printf("%f",s);

    return 0;
}