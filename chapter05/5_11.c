// Àı5.11 Òë ÃÜÂë¡£µçÎÄ¼ÓÃÜ
#include<stdio.h>
int main(){
	char ch;
	while((ch=getchar())!='\n'){
		if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
			if((ch>='w'&& ch<='z')||(ch>='W'&&ch<='Z'))
				ch=ch-22;
			else ch=ch+4;
		}
		printf("%c",ch);	
	}
	printf("\n");
	return 0;
} 
