#include <stdio.h>
int T[50];
int taille (){
    int n;
    do
    {
        printf("donner le taille du tableau");
        scanf("%d",&n);
    } while (n<=0||n>=50);
    return n;
}
void remplir (int T[],int n){
    int i;
    for (i=0;i<n;i++){
        do
        {
            printf("donner le valeur du T[%d]",i);
            scanf("%d",&T[i]);
        } while (T[i]>100); /*condition*/
    }
}
void affiche (int T[],int n){
    int i ;
    for (i=0;i<n;i++)
        printf("%3d\t",T[i]);
}
int occurence (int T[],int n ,int x ){
    int cp=0,i;
    for (i=0;i<n;i++)
        if (T[i]==x)
            cp++;
    return cp ;
}
void occ_elts_tab (int T[], int n){
    int i;
    for (i=0;i<n;i++)
        printf ("l'occurence de %d est %d \n",T[i],occurence(T,n,T[i]));
}
void occ_elts_tab2 (int T[], int n){
    int i,k=0,x;
    for (i=0;i<n;i++){
        k=0;
        for (x=0;x<n;x++)
            if (T[i]==T[x])
                k++;
    printf ("l'occurence de %d est %d \n",T[i],k);
    }
}
void zeros2right (int T[],int n ){
    int j=n-1,i=0,k;
    do{
        if (T[i]==0){
            for (k=0;k<=j;k++)
                T[k]=T[k+1];
            T[j--]=0;
         }
         else 
            i++;
    }while(i<j);
}
int max (int T[],int n){
    int i,m=T[0];
    for (i=1;i<n;i++)
        if (T[i]>m)
            m=T[i];
    return m;
}
int pos (int T[],int n,int x){
    int i ,pos ;
    for (i=0;i<n;i++){
        if (T[i]==x)
            pos=i+1;
    }
    return pos ;
}
int symetrique(int T[],int n){
    int i=0,j=n-1;
    while(T[i]==T[j]){
        i++;
        j--;
    }
    return(i>j);
}
void inverse(int T[], int n){
    int x,i;
    for(i=0;i<n/2;i++){
        x=T[i];
        T[i]=T[n-i-1];
        T[n-i-1]=x;
    }
}
void remove_zeros ( int T [],int n){
    int i ,x=0;
    for (i=0;i<n;i++){
        if (T[i]!=0)
            T[x++]=T[i];
    }
}
void shift_pos (int T[],int n ){
    int pos ,i, dir,x;
    printf("donner le nombre de decalage :  ");
    scanf("%d",&pos);
    while (pos)
    {
        printf ("donner la direction de changement \n");
        printf ("0:droite  1: gauche ");
        scanf("%d",&dir);
        if (dir){
            x=T[0];
            for ( i = 0; i < n; i++)
                T[i]=T[i+1];
            T[n-1]=x;
            printf ("le tab apres le decalage a gauche :\n");
            affiche(T,n);
        }
        else
        {
            x=T[n-1];
            for (i=n-1;i>0;i--)
                T[i]=T[i-1];
            T[0]=x;
            printf (" le tab apres le decalage a droite :\n");
            affiche (T,n);
        }
        pos--;
    }
    
}
int pair (int x){
    if (x==0)
        return 1;
    else
        if (x==1)
            return 0;
        else
            return (pair(x-2));
}
void elets_pair (int T[], int n){
    int i ;
    for (i=0;i<n;i++){
        if (pair(T[i]))
            printf ("les elements paires sont  %d\t",T[i]);
    }
}
int exict (int T1[],int T2[],int n,int n2){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n2;j++){
            if (T1[i]==T2[j])
                return 0;
            else
                return 1;
        }
    }
}
void sous_seq (int T[],int n){
    int cp=0,i,l=0;
    for (i=1;i<=n;i++){
        /*printf("%d\t",T[i-1]);*/
        cp=0;
        if (T[i]>T[i-1]){
            cp++;
            printf("%d\t",T[i-1]);}
        else {
            if (cp==0){
                l++;
                printf("%d\n",T[i-1]);}
            else {
                printf("%d",T[i]);
                l++;}}
    }
    printf("il y a %d sous sequence dans ce tableau\n",l);
}
void consecutifs (int T[], int n){
    int i,l=1,posf,max=1;
    for (i=1;i<n;i++){
        if (T[i]==T[i-1]){
            l++;
            if (l>max){
                max=l;
                posf=i;
            }
        }
        else 
            l=1;/*retart lil compteur */
    }
    if (max>1){
        printf ("il y a un plateau dans T::\n");
        printf("la longueur = %d \n l'indice de debut =%d \n l'indice fin= %d \n",max,posf-max+1,posf);}
    else
        printf("il n'y a pas de sequences");
}



void main (){
    int n,n1;
    n=taille();
    remplir(T,n);
    affiche(T,n);
    printf("\n");
    /*remove_zeros(T,n);
    n1=occurence(T,n,0);
    affiche(T,n-n1-1);*/
    /*printf("%d",pos(T,n,5));
    zeros2right(T,n);
    affiche(T,n);*/

}