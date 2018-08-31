#include <cstdio>


int main(){
  char c;
  int count = 0;
  while(1){
    if(scanf("%c",&c)!=1) break;
    if(c != '"') printf("%c",c);
    else{
      if(count == 0){
        printf("``");
        count++;
      }
      else{
        printf("''");
        count--;
      }
    }
  }
}
