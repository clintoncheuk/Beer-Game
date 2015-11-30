#include <iostream>
using namespace std;

int calculate(int money, int cap, int bottle, int total){
   if((money<2)&&(cap<4)&&(bottle<2)){
       return total;
   }else{
       return calculate(money%2,cap%4+money/2+cap/4+bottle/2,bottle%2+money/2+cap/4+bottle/2,total+money/2+cap/4+bottle/2);
   }
}

int main()
{
  int input;
  cin >> input;
  cout << calculate(input, 0, 0, 0);
  return 0;
}