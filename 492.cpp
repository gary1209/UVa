#include <cstdio>
#include <cstring>
#include <cctype>

int main(){
  char c;
  char temp;
  char a[200];
  int index = 0;
  bool flag = 0;// 0:開頭是母音 1:開頭是子音
  while(1){
    if(scanf("%c",&c)!=1) break;
    // printf("c:%c\n",c);
    if(!(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    // if(!(isalpha(c))){
      printf("inside\n");
      if(index != 0){
        //print the word  
        for(int i=0; i < index-1; i++){
          printf("%c",a[i]);
        }
        if(flag == 1){
          printf("%c",temp);
        }
        printf("ay");
        flag = 0;
      }
      printf("%c",c);
      index = 0;
    }else{
      if(index==0 && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')){
        flag = 1;
        temp = c;
      
      }else{
        printf("c:%c, index:%d\n",c,index);
        a[index] = c;
        index++;
      }
    }
  }
}
