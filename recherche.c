#include<stdio.h>
void tri_insertion(int T[],int n){
    int i,j,v;
    for (i=1;i<n;i++){
        v=T[i];
        j=i;
        while (j>0&&T[j-1]>v){
            T[j]=T[j-1];
            j--;
        }
        T[j]=v;
    }
}
int T[10]={5,3,6,42,5,98};
int rech_sequ(int T[],int n,int x){
    int i;
    for (i=0;i<n;i++){
        if (T[i]==x)
            return i;
    }
    return -1;
}
int mid (int s,int f){
    int m;
    return m=(s+f)/2;
}
int rech_dichto (int T[],int n ,int x){
    int l=0,h=n-1,m;
    while (l<=h){
        m=mid(l,h);
        if (T[m]==x)
            return m;
        if (T[m]>x)
            h=m-1;
        else
            l=m+1;
    }
    return -1;
}
void main (){
    int n=6,i,pos;
    for (i=0;i<n;i++){
        printf("%d\t",T[i]);
    }
    printf("\n");
    tri_insertion(T,n);/*recherche dich only*/
    pos=rech_dichto(T,n,42);
    if (pos>=0)
        printf("la position de veleur recherchee est %d",pos+1);
    else
        printf("le valeur recherchee n'exicte pas dans cette liste ");

}