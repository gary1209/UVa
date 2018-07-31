#include <cstdio>

int main(){
  while(1)
  {
    int num1, num2; 
    if(scanf("%d%d", &num1,&num2)!=2) break;
    // printf("%d,%d\n",num1,num2);
    int max_cycle_length = 1;
    for(int i= num1; i<=num2; i++)
    {
      int j = i;
      int cycle_length = 1;
      while(j != 1){
        j%2==0 ? j/=2 : j=j*3+1;
        cycle_length++;
      }
      // printf("cycle_length:%d!\n",cycle_length);
      max_cycle_length = max_cycle_length>cycle_length?max_cycle_length:cycle_length;
    }
    printf("%d %d %d\n",num1,num2,max_cycle_length);
  }
}
