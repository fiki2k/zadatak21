// Program ce sva slova prevorit u velika slova.

#include<stdio.h>
#include<string.h>
int main(){
   char polje[25];
   int i;

   printf("Unesi string:");
   scanf("%s",polje);

   for(i=0;i<=strlen(polje);i++){
      if(polje[i]>=97&&polje[i]<=122)
         polje[i]=polje[i]-32;
   }
   printf("\nString s velikim slovima je: %s",polje);
   return 0;
}
