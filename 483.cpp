#include <cstdio>
#include <cstring>

int main(){
  char c;
  char s[300];
  // char* ptr = s;
  int index = 0;
  
  while(1){
    if(scanf("%c",&c) != 1) break;
    if(c == '\n' || c == ' '){);
      for(int i = index-1; i >= 0; i--) printf("%c",s[i]);
      printf("%c",c);
      index = 0;
    }else{
      s[index] = c;
      index++;
    }
  }
}
