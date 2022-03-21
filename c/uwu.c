#include <stdio.h>
#include <string.h>

#define BUF_LEN 500

char *uwu(char text[]);
char *uwu(char text[]) {
	for (unsigned long i = 0; i < strlen(text); i++) {
		switch (text[i]) {
			case 'l':
			case 'r':
				text[i] = 'w';
		}
	}
	return text;
}

int main() {
	char text[BUF_LEN];
	printf("insert a text to be uwuified: ");
	fgets(text, BUF_LEN, stdin);
	printf("\n%s", uwu(text));
}
