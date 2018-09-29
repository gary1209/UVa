//#10300
#include <cstdio>

int main(){
    int rounds;
    scanf("%d",&rounds);
    for(int i = 0; i < rounds; i++){
      int num;
      scanf("%d",&num);
      int sum = 0;
      int a;
      int b;
      for(int j = 0; j < num; j++){
        scanf("%d%*d%d",&a,&b);
        sum = sum + a*b;
      }
      printf("%d\n",sum);
    }
}
