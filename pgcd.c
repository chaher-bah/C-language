/*pgcd avec decomposition */
#include<stdio.h>
void pgcd (int a,int b){
    int p=1,i=2,cp=0;
    printf("le pgcd de %d,%d est \t",a,b);
    do
    {
        if (a%i==0&&b%i==0)
        {
            p=p*i;
            a=a/i;
            b/=i;
            cp++;
            if (cp==1)
                printf("%d",i);
            else
                printf("*%d",i);

        }
        else
            if (a%i==0)
                a/=i;
            else
                if (b%i==0)
                    b/=i;
                else
                    i++;
    } while (a!=1&&b!=1);
    printf("=%d",p);

}
/*pgcd avec methode de euclider */
void pgcd1(int a,int b){
    int r ;
    printf("pgcd(%d,%d)=",a,b);
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
        printf("pgcd(%d,%d)=",a,b);
    }
    printf("%d",a);
}

void main (){
    return (printf("le pgcd de  celle cee est %d"),pgcd1(1500,140));
}
