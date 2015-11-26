#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int cap,bottle,money;
	int sum=0;
	int sum2=0;
	scanf("%d",&money);
	bottle=money/2;
	cap=money/2;
	sum+=money/2;
	while(!(bottle/2==0 && cap/4==0)){
printf("cap: %d | bottle: %d\n",cap,bottle);		
		sum2=sum;
		sum+=cap/4;
		sum+=bottle/2;
		cap=cap%4;
		bottle=bottle%2;
		cap+=sum-sum2;
		bottle+=sum-sum2;
	}
	sum2=sum;
	int i;
printf("start borrow bottles...\n");	
AA:	i=0;
printf("cap: %d | bottle: %d\n",cap,bottle);
	if(cap==3){
		sum++;
		cap=0;
		bottle++;
		i=1;
	}
	else 
	if(cap==2){
		sum+=2;
		cap=0;
		bottle=0;
		i=1;
	}
	if(bottle==1){
		sum++;
		bottle=0;
		cap++;
		i=1;
	}
	if(bottle==2){
		sum++;
		bottle=bottle%2;
		bottle++;
		cap++;
		i=1;
	}
	if(cap==4){
		sum++;
		cap=cap%4;
		bottle++;
		cap++;
		i=1;
	}
	if(i==1) goto AA;
	printf("If you dont borrow you can drink %d beers\n",sum2);
	printf("If you can borrow you can drink  %d beers\n",sum);
	return 0;
}
