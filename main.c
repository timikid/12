#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

   FILE *fp;
   char c;
   int i;
   
   fp = fopen("sample.txt", "r");
   if(fp == NULL)
   {
   	return -1;
   }
   
   while( (c=fgetc(fp)) != EOF ){    //읽어오면서 조건검토  
   	 printf("%c",c); 
   	}
    
    
    //while ( fgets(str, 100, fp) !=NULL)
    //printf("%s",c)
    
    fclose(fp);
    
	return 0;
}
