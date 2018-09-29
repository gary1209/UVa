//#10370
#include <cstdio>

int main(){
    int rounds;
    scanf("%d",&rounds);
    for(int i = 0; i < rounds; i++){
      int num;
      scanf("%d",&num);
      int grades[1000] = {};
      int sum = 0;
      for(int j = 0; j < num; j++){
        scanf("%d",grades + j);
        sum += grades[j];
      }
      double avg;
      avg = (double)sum / num;
      // printf("avg: %.3f\n",avg);
      int count = 0;
      
      for(int k = 0; k < num; k++){
        if(grades[k]>avg) count++;
      }
      printf("%.3f%%\n",(double)count*100/num);
    }
}
