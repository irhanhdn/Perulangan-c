#include<stdio.h>

void main (){
int Angka[5];



int i;
for(i=0;i<5;i++){
printf("masukan angka ke-%d : ", i+1);
scanf("%d",&Angka[i]);
}
printf("\n");
printf("Berikut angka yang tersimpan :\n\n ");


for(i=0; i<5;i++){
printf("Angka Tersimpan : %d",Angka[i]);
printf("\n");
}
return 0;
}
