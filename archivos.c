#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char **argv)
{
  /*
  Funciones valudas para clase fopen fclose fread fwrite r r+ w w+ a a+
  */
  char tab[8][8];
  FILE *fp=0;
  fp=fopen("tablero.tab","r");
  fp=fopen("tab.tab","w");
  fwrite(tab,sizeof(char),64,fp);
  
  int n=fread(tab,sizeof(char),64,fp);
  
  
  
  
  
  fclose(fp);
  
  /*empieza aleatorios*/
  time
  stand(time(0));//seed
  int volado=rand()%10;//random entre 0 y 9
  
  
  usleep(1000000);
}
