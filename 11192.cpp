#include <cstdio>
#include <cstring>

int main(){
  char s[101];
  int num;
  int len;
  while(true){
    if(scanf("%d%s", &num, s) !=2) break;
    if(num == 0) break;
    len = strlen(s) / num;
    for(int i = 0; i < num; i++){
      for(int j = len; j > 0; j--){  
        printf("%c",s[j-1 + len*i]);
      }
    }
    printf("\n");
  }
}
