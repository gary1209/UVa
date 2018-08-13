#include <cstdio>

int main(){
  int num;
  scanf("%d%*c", &num);
  for(int i = 0; i < num; i++){
    printf("Case %d: ",i+1);
    char c;
    int count =0;
    while(true){
        scanf("%c",&c);
        if( c =='\n') break;
        scanf("%d", &count);
        for(int i = 0; i < count; i++){
          printf("%c",c);
        }
    }
    
    printf("\n");
  }
}
