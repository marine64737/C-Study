#include <stdio.h>

int main(){
	int sum=0;
	int num1[10]={0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
	int num2[10]={3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
	int num10[8]={6, 6, 5, 5, 5, 7, 6, 6};
	int hundred=7;
	int word_and=3;
	//zero one two three four five six, seven, eight, nine
	//ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen
	//twenty, thirty,forty, fifty, sixty, seventy, eighty, ninety
	
	for (int i=0; i<10; i++)//0~9
		sum+=num1[i];
	for (int i=0; i<10; i++)//10~19
		sum+=num2[i];
	for (int i=0; i<8; i++){
		for (int j=0; j<10; j++){//20~99
			sum+=num10[i];
			sum+=num1[j];
		}
	}
	for (int k=1; k<10; k++)
		sum+=num1[k]+hundred;
	for (int k=1; k<10; k++){ //101~999
		for (int i=1; i<10; i++){//1~9
			sum+=num1[k];
			sum+=hundred+word_and;
			sum+=num1[i];
		}
		for (int i=0; i<10; i++){//10~19
			sum+=num1[k];
			sum+=hundred+word_and;
			sum+=num2[i];
		}
		for (int i=0; i<8; i++){
			for (int j=0; j<10; j++){//20~99
				sum+=num1[k];
				sum+=hundred+word_and;
				sum+=num10[i];
				sum+=num1[j];
			}
		}
	}
	sum+=11;
	printf("%d\n", sum);
	return 0;
}
