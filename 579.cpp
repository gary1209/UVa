#include <cstdio>

int main(){
  char str1[10];
  char stop[10] = "0:00";
  char hh[2];
  char mm[2];
  
  while(1){
    if(scanf("%s",str1)!=1) break;
    if(str1 == stop) break;
    
    sscanf(str1,"%s:%s",hh,mm);
    printf("%s\n%s\n",hh,mm);
    
    int h;
    int m;
    float angle;
    
    h = atoi(hh);
    m = atoi(mm);
    
    angle = (h*60 + m)*0.5 - m*6
    while(angle > 180){
      angle-=180;
    }
    while(angle < 0){
      angle+=180;  
    }
    printf("%3lf\n",angle);
  }
}
