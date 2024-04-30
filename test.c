#include <stdio.h>
#include<string.h>
void menu(){
    printf("\n1.calculer la note de matiere");
   printf("\n2.calculer la moyenne generale");
   printf("\n3.afficher une bulletin ");
   printf("\n4.exit");
}
void submenu(){
    printf("\n 5. retrour au menu principal \n 4.exit ");
}
typedef struct
{
    char nom[10];
    float note;
    int coeff
}nm;

int main(){
    int i,j=0,k=0,n,c,coe=0;
    float m=0,no,not=0;
    nm t[20];
    do{
        menu();
       
   scanf("%d",&i);
   if(i==1){
   
   printf("le nom de matiere: ");
   scanf("%s",t[j].nom);
      printf("entrer le coefficient:");
    scanf("%d",&t[j].coeff);
   printf("nombre de note: ");
   scanf("%d",&n);
   while(k<n){
    printf("la note %d :",k+1);
    scanf("%f",&no);
    m=m+no;
    k++;
   }
   k=0;
   m=m/n;
   printf("note de matiere :%.2f",m);
   t[j].note=m;
   m=0;
   j++;
   submenu();
   scanf("%d",&i);

   
   

   }
   else if(i==2){
    c=j;
    for(k=0;k<c;k++){
     
    not=+(t[k].note*t[k].coeff);
    coe=+t[k].coeff;

    }
    not=not/coe;
    printf("la moyenne generale est :%.2f",not);
    not=0;
    coe=0;
    k=0;
        submenu();
    scanf("%d",&i);
   }

    }while(i!=4);
   
}