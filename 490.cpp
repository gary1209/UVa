#include <cstdio>
#include <cstring>

int main(){
  char a[100][100] = {'\n'};
  char c;
  int i=0;
  int j=0;
  
  //先input
  while(1){
      // printf("%c",c);
      if(scanf("%c",&c) != 1) break;
      if(c != '\n'){
        a[i][j] = c;
        i++;
      }else{ //換行
        j++;
        i = 0;
      }
  }
  
  //再output  
  for(j=0;j<99;j++){
    for(i=0;i<99;i++){
      if(a[i][j]!='\n'){
        printf("%c",a[i][j]);
      }else{
        printf("\n");
      }
    }
  }
}
