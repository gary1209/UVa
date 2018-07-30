#include <cstdio>
#include <cmath>

#int main(){
#  while(1){
#    int num1;
#    scanf("%d", &num1);
#    int last_num;
    #last_num = ((int)pow(num1+1,2) / 4)*2 - 1; long long 情況下 pow 會失準
#    printf("%d\n", last_num*3 -6);
#  }
#}

int main(){
  while(1){
    long long num1;
    if(scanf("%lld", &num1)!=1) break;
    long long last_num;
    last_num = (num1+1)*(num1+1) / 2 - 1;
    printf("%lld\n", last_num*3 -6);
  }
}
