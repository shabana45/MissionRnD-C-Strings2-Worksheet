/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
char * get_last_word(char * str){
	int len, a = 0, i;
	for (len = 0; str[len] != '\0'; len++);
	while (len != -1)
	{
		if (str[len - 1] == ' ')
			len--;
		else
			break;
	}
	if (len == 0)
		return "";
	for (i = len - 1; str[i] != ' '; i--);
	if (i < 0)
		return str;
	else{
		char *new_str = (char*)(malloc((i)*sizeof(char)));
		for (int j = i + 1; j < len; j++){
			new_str[a++] = str[j];
		}
		new_str[a++] = '\0';
		return new_str;
	}
}
