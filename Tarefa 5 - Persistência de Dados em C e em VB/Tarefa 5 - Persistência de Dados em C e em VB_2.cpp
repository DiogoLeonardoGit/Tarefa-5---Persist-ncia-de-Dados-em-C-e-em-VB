#include <stdio.h> 
#include <stdlib.h> 
/* por causa do funcao exit() "I */
int main() { 
FILE *fp; 
char string[100]; 
int i; 
fp = fopen("texto.txt","w"); 
/* Arquivo ASCII, para escrita */ 
if(!fp) { 
printf( "Erro na abertura do arquivo"); 
exit(0); 
} 
printf("Insira a string a gravar no ficheiro: "); 
gets(string); 
for(i=0; 
string[i]; 
i++) 
fputc(string[i], fp); 
/* Grava a string, caractere a caractere */ 
fclose(fp); 
return 0; } 

