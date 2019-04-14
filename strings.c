# include <stdio.h>
# include <strings.h>

int tamanho(char *str){
	int tam=0;
	while(str[tam] !='\0') 
		tam = tam +1;
		
	return tam;
}
void copia(char *strings1, char *strings2){
	int i=0;
	for (i=0; strings1[i]!='\0';i++)
    	strings2[i] = strings1[i];
    strings2[i] = '\0';
  
}

char juntar(char *str1, char *str2){
	int i=0 ;
	int j=0;
	for(i=0;str1[i]!='\0';i++)
		for(j=0;str2[j]!='\0';j++,i++){
      str1[i]=str2[j];
    
    }
  	str1[i]='\0';
}

int comparar(char *str3, char *str4){
	int i=0;
	while(str3[i] == str4[i] && str3[i]!='\0')
		i++;
	return (str3[i] - str4[i])?0:1;	
	 
  }

int main(){
	int tam;
	char strings1[50]="boanoite",strings2[50]="bomdia";
	tam =  tamanho("bemvindo");
	char str1[50]="boa", str2[50]="tarde";
	char str3[50]="boa",str4[50]="boa";
	printf("tamanho da strings: %d caracter\n", tam);
	printf("antes da funcao: %s\n",strings2);
	copia(strings1,strings2);
	printf("depois da funcao:%s\n",strings2);
  	printf("resultado da strings concatenada: %s%s\n",str1,str2);
  	juntar(str1,str2);
	printf("resultado da comparacao e: %d\n",comparar(str3,str4));
	
	return 0;
}
