#include <cstdio>
#include <cstring>

int main(){
  char s[201];
  while(1){
    if(scanf("%s",s)!=1) break;
    // printf("len:%d\n",strlen(s));
    if(s[0] == '*' && strlen(s) == 1) break;
    int len = strlen(s);
    int count = -1;
    int ans = 0;
    for(int i = 0; i < len; i++){
      if(s[i] == 'W') count += 64;
      else if(s[i] == 'H') count += 32;
      else if(s[i] == 'Q') count += 16;
      else if(s[i] == 'E') count += 8;
      else if(s[i] == 'S') count += 4;
      else if(s[i] == 'T') count += 2;
      else if(s[i] == 'X') count += 1;
      else if(s[i] == '/'){ 
          if (count == -1) count = 0;
          else{
              if(count == 64) ans++;
              count = 0;
          }
      }
      else printf("ERROR\n");
    }
    printf("%d\n",ans);
  }
}
