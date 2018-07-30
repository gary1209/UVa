#include <cstdio>

int main(){
  int count;
  scanf("%d",&count);
  for(int i = 0; i < count; i++){
    int amp, freq;
    scanf("%d%d",&amp, &freq);
    // printf("amp: %d\n",amp);
    // printf("freq:%d\n",freq);
    
    //總個要印幾個三角形
    for(int i = 0; i < freq; i++){
      //先印上半部三角形
      for(int j = 1; j <= amp; j++){
        for(int k = 1; k <=j; k++){
          printf("%d",j);
        }
        printf("\n");
      }
      //再印下半部
      for(int j = amp-1; j > 0; j--){
        for(int k = 1; k <=j; k++){
          printf("%d",j);
        }
        printf("\n");
      }
      if(i!= count) printf("\n");
      // if(i== count) printf("end");
    }
  }  
}
