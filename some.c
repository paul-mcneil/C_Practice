#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 10

int main(){

	int ch_arr[ARSIZE], count1;
	int count2, stop, lastchar;

	lastchar = 0;
	stop = 0;

	while(stop != 1){
		ch_arr[lastchar] = getchar();
		if(ch_arr[lastchar] == '\n')
			stop = 1;
		else
			lastchar = lastchar + 1;
		if(lastchar == ARSIZE)
			stop = 1;
	}
	lastchar = lastchar-1;

	count1 = 0;
	while(count1 < lastchar){
		count2 = count1 + 1;
		while(count2<= lastchar){
			if(ch_arr[count1] > ch_arr[count2]){
				int temp;
				temp = ch_arr[count1];
				ch_arr[count1] = ch_arr[count2];
				ch_arr[count2] = temp;
			}
			count2 = count2 + 1;
		}
		count1 = count1 + 1;
	}

	count1 = 0;
	while(count1 <= lastchar){
		printf("%c\n", ch_arr[count1]);
		count1 = count1 + 1;
	}
	exit(EXIT_SUCCESS);
}