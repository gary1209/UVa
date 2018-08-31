#include <cstdio>


int main(){
  // printf("%d",'z'-'s'); // 相減=7
  char c;
  while(1){
    if(scanf("%c",c)!=1) break;
    printf("%c",c-7);
  }
}
