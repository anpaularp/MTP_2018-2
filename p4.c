// Ana paula ribeiro de passos
//11621ETE002

#include <stdio.h>

int main() {
	char s[256];
	char aux[256];
	scanf("%s",s);
	int i = 0, a = 0, p = 0, b = 0, c = 0;
	while(s[i]!='\0')
	i++;

        for(a = 0; a <=i; a++){
        	if(s[a]>='1'&&s[a]<='9')
        	{
			aux[p] = s[a];
			p++;
			}
		}
		printf("%s",aux);
	return 0;
}
