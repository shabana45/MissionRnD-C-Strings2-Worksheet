/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int l1, l2, i, j;
	int count = 0, count1 = 0, x;
	for (l1 = 0; str[l1] != '\0'; l1++);
	for (l2 = 0; word[l2] != '\0'; l2++);
	for (i = 0; i < l1;)
	{
		j = 0;
		x = 0;
		count = 0;
		while (str[i] == str[i + 1])
		{
			x++;
			i++;
		}
		if (x > l2)
			return (x - (l2 - 2));
		while ((str[i] == word[j]) && (str[i] != '\0') && (word[j] != '\0'))
		{
			count++;
			i++;
			j++;

		}
		if (count == l2)
		{
			count1++;
			count = 0;
		}
		else
			i++;
	}
	return count1;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

