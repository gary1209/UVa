#include <cstdio>
#include <cmath>

int main(){
  while(1){
    int num1;
    scanf("%d", &num1);
    int last_num;
    last_num = ((int)pow(num1+1,2) / 4)*2 - 1;
    printf("%d\n", last_num*3 -6);
  }
}
