#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, oseat;
	char* seattype;
	printf("Enter seat no.\n");
	scanf("%d", &n);
	int remainder = n%12;
	int quotient = n/12; 

	switch(remainder){
		case 0:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder-11);
			} else{
				oseat = (remainder-11);
			}
			seattype = "WS";
			printf("%d , %s\n", oseat, seattype);
			break;//24//24
		case 1:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder+11);
			} else{
				oseat = (remainder+11);
			}
			seattype = "WS";
			printf("%d , %s\n", oseat, seattype);
			break;//25//25
		case 2:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder+9);
			} else{
				oseat = (remainder+9);
			}
			seattype = "MS";
			printf("%d , %s\n", oseat, seattype);
			break;//26//26
		case 3:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder+7);
			} else {
				oseat = (remainder+7);
			}
			seattype = "AS";
			printf("%d , %s\n", oseat, seattype);
			break;//27//27
		case 4:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder+5);
			} else{
				oseat = (remainder+5);
			}
			seattype = "AS";
			printf("%d , %s\n", oseat, seattype);
			break;//28//28
		case 5:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder+3);
			} else{
				oseat = (remainder+3);
			}
			seattype = "MS";
			printf("%d , %s\n", oseat, seattype);
			break;//29
		case 6:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder+1);
			} else{
				oseat = (remainder+1);
			}
			seattype = "WS";
			printf("%d , %s\n", oseat, seattype);
			break;//30
		case 7:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder-1);
			} else{
				oseat = (remainder-1);
			}
			seattype = "WS";
			printf("%d , %s\n", oseat, seattype);
			break;//31
		case 8:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder-3);
			} else{
				oseat = (remainder-3);
			}
			seattype = "MS";
			printf("%d , %s\n", oseat, seattype);
			break;//32
		case 9:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder-5);
			} else{
				oseat = (remainder-5);
			}
			seattype = "AS";
			printf("%d , %s\n", oseat, seattype);
			break;//33
		case 10:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder-7);
			} else{
				oseat = (remainder-7);
			}
			seattype = "AS";
			printf("%d , %s\n", oseat, seattype);
			break;//34
		case 11:
			if (quotient>0)
			{
				oseat = (quotient*12)+(remainder-9);
			} else{
				oseat = (remainder-9);
			}
			seattype = "MS";
			printf("%d , %s\n", oseat, seattype);
			break;//35//35
	}

return 0;	
}