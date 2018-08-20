#include <cstdio>
#include <cstring>

int main(){
  char c;
  char s[300];
  // char* ptr = s;
  int index = 0;
  
  while(1){
    if(scanf("%c",&c) != 1) break;
    if(c == '\n' || c == ' '){
      for(int i = index-1; i >= 0; i--) printf("%c",s[i]);
      printf("%c",c);
      index = 0;
    }else{
      s[index] = c;
      index++;
    }
  }
}
/*
#include <cstdio>
#include <cstring>

int main(){
  char c;
  char s[300];
  char* ptr = s;
  //int index = 0;
  
  char s[20] = "hello";
  char s[100]; strcpy(s, "hello");
  
  while(1){
    if(scanf("%c",&c) != 1) break;
    if(c == '\n' || c == ' '){
      while(ptr>s)printf("%c", *--ptr);
      //for(int i = index-1; i >= 0; i--) printf("%c",s[i]);
      printf("%c",c);
      //index = 0;
    }else{
      // *ptr++ = c;
      
      *ptr = c;
      ptr++;
      //s[index] = c;
      //index++;
    }
    s = "howwwe";
    // scanf("%s",s);
    // printf("%c",*ptr);
    // printf("%c",ptr[0]);
  }
}
*/
