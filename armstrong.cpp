#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main(){
	int num,sum=0,rem,orgnum,n=0;
	printf("Enter any number");
	scanf("%d",&orgnum);
	num=orgnum;
	while(num!=0){
		num=num/10;
		n++;
	}
	num=orgnum;
	while(num!=0){
		rem=num%10;
		sum=sum+pow(rem,n);
		num=num/10;
		}
	if(sum==orgnum){
		printf("Given number is armstrong number\n");}
	else{
		printf("Given nuumber is not armstrong number");
	}
	return 0;
		}

