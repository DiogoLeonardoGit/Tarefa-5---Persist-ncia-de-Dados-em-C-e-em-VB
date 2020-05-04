#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include <windows.h>
/* por causa do funcao exit() "I */
int main() { 
FILE *fp; 
char user[50]; 
char pass[50];
char string[102];
char resposta[2];
int i; 
fp = fopen("Login_data.dat","w"); 
/* Arquivo ASCII, para escrita */ 
if(!fp) { 
printf( "Erro na abertura do arquivo"); 
exit(0); 
} 

printf("Insira o nome de utilizador: "); 
gets(user); 
printf("Insira a password: "); 
gets(pass); 
strcat(string, user);
strcat(string, ";");
strcat(string, pass);
for(i=0; string[i]; i++) 
fputc(string[i], fp); 
/* Grava a string, caractere a caractere */ 
fclose(fp); 
printf("Registo concluido, Clique em alguma tecla para abri-lo."); 
gets(resposta);
system("start Login_data.dat");
return 0;
}

