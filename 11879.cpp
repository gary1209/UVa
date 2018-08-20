#include <cstdio>
#include <cstring>
//從後往前算
int main(){
  char num[101];
  while(1){
    if(scanf("%s",num)!=1) break;
    int len = strlen(num);
    int remainder = 1;
    int ans = 0;
    if(len == 1 && num[0]-'0' == 0) break;
    for(int i = len; i >0; i--){
      remainder = remainder *10 % 17;
      ans += (num[i-1]-'0') * remainder % 17;
    }
    printf("%d\n",ans%17==0?1:0);
  }
}
/*從前往後算
#include <cstdio>
#include <cstring>

int main(){
  char num[101];
  while(1){
    if(scanf("%s",num)!=1) break;
    // int len = strlen(num);
    // int remainder = 1;
    int ans = 0;
    if(num[0] == '0' && num[1]=='\0') break;
    int i=0;
    while(num[i] != '\0'){
          // ans += (num[i] - '0') *10 % 17;
      ans = ((ans *10) + (num[i]-'0') )%17;
      i++;
    }
    printf("%d\n",ans%17==0?1:0);
  }
}
