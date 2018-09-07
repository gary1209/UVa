#include <cstdio>

int main(){

  char a[101][101] = {'\0'};
  int i = 0;
  int j = 0;
  int max_row = 0;
  int max_col = 0;
  char c;
  
  while(1){
    if((scanf("%c",&c)) != 1) break;
    if(max_row ==0) max_row=1;
    if(max_col ==0) max_col=1;
    a[i][j] = c;
    
    if(c != '\n'){
      j++;
      if(j>max_col) max_col = j;
    }else{
      j=0;
      i++;
      if(i>max_row) max_row = i;
    }
  }
  max_row++;
  // printf("max_col:%d\n",max_col);
  // printf("max_row:%d\n",max_row);
  for(int m = 0; m < max_col; m++){
    for(int k = max_row-1; k >= 0; k--){
      if(a[k][m] != '\n') printf("%c",a[k][m]);
      else printf(" ");
    }
    if(m != max_col-1) printf("\n");
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
