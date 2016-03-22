/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
int is_vowel(char* str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		count++;
	return count;
}
int no_splChar(char *str)
{
	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!((str[i] >= 'A'&&str[i] <= 'Z') || (str[i] >= 'a'&&str[i] <= 'z')))
			cnt++;
	}
	return cnt;
}

void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	if (str == NULL)
	{
		*vowels = 0;
		*consonants = 0;
	}
	else{
		int len;
		*vowels = 0;
		*consonants = 0;
		for (len = 0; str[len] != '\0'; len++);
		if (is_vowel(str) > 0){
			*vowels = is_vowel(str);
			*consonants = len - is_vowel(str) - no_splChar(str);
		}
		else
			*consonants = len;
	}
}
