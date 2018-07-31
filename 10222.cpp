#include <cstdio>
#include <cstring>
#include <algorithm>

char table[128];
void build(const char *s) {
  int i =0;
  while(1){
    table[s[i+2]] = s[i];
    i++;
    if(s[i+2] == '\0') break;
  }
}

int main(){
  table['\n'] = '\n';
  table[' '] = ' ';
  build("`1234567890-=");
  build("qwertyuiop[]\\");
  build("asdfghjkl;'");
  build("zxcvbnm,./");
  while(true) {
    char c;
    if(scanf("%c", &c) != 1) break;
    printf("%c", table[c]);
  }
  return 0;
}
