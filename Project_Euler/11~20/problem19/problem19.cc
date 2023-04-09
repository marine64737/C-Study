#include <stdio.h>

int main(){
	int year=1901;
	int day=1;
	int a=0;
	int allDay1[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int allDay2[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (int i=0; i<12; i++){
		day+=allDay1[i];
	}
	day-=28*12;
	while (year < 2001){
		if (year%4==0 && !((year%100==0)&&(year%400!=0)) || (year%400==0)){
			for (int i=0; i<12; i++){
				day+=allDay2[i];
				if (day % 7 == 6) {
					printf("Yoon: %d. %d.\n", year, i+1);
					a++;
				}
			}
		}
		else {
			for (int i=0; i<12; i++){
				day+=allDay1[i];
				if (day % 7 == 6) {
					printf("%d. %d.\n", year, i+1);
					a++;
				}
			}
		}
		day-=28*12;
		year++;
	}
	printf("Sun: %d\n", a);
	return 0;
}
