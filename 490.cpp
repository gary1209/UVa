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


/*
#include <cstdio>
#include <cstring>

int main(){
  char a[101][101]={'\0'};
  char c;
  int i=0;
  int j=0;
  
  // Input:
  // ABCDE
  // WXYZ
  // ORZ
  
  // Array:
  // A  W  O  \0
  // B  X  R  \0
  // C  Y  Z  \0
  // D  Z  \n \0
  // E  \n \0 \0
  // \n \0 \0 \0
  // \0 \0 \0 \0
  
  // Output:
  // OWA
  // RXB
  // ZYC
  //  ZD
  //   E
  
  //先input
  while(1){
      // printf("%c",c);
      if(scanf("%c",&c) != 1) break;
      if(c != '\n'){
        a[i][j] = c;
        i++;
      }else{ //換行
        a[i][j] = '\n';
        j++;
        i = 0;
      }
  }

  //再output  
  for(i=0; i<=100; i++){
    for(j=100;j>=0;j--){
      if(a[i][j]!='\0' && a[i][j]!='\n'){
        printf("%c",a[i][j]);
      }else if(a[i][j]=='\n'){
        printf("\n");
      }else{
        //如果是'\0'
        
      }
    }
  }
}
*/
