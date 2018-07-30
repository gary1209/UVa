#include <cstdio>
#include <cstring>
#include <algorithm>

int main(){
  // char c;
  while(1){
    char a[1001];
    // char* ptr = a;
    scanf("%s", a);
    
    if(a[0] == '0' && (int)strlen(a)==1) break;
    int odd=0, even=0;
    int len = (int)strlen(a);
    // printf("%d",len);
    for(int i = 0; i < len; i++){
      if(i % 2 == 0) {
        odd += a[i]-'0';
      } else {
        even += a[i]-'0';
      }
    }
    // printf("odd:%d\neven:%d",odd,even);
    if((odd - even) % 11 ==0){
      printf("%s is a multiple of 11.\n",a);
    }
    else{
      printf("%s is not a multiple of 11.\n",a);
    }
  }
  
  //char c;
  //scanf("%c",&c);
  //printf("%d %c$\n", c, c);
  //char s[100];
  //scanf("%s", s);
  //fgets(s, sizeof(s), stdin);
  //s[strlen(s) - 1] = '\0';
  //for(int i = 0; i < strlen(s); i++); // DO NOT DO THIS!!
  return 0;
}
