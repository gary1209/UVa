#include <cstdio>
#include <cstring>
// http://www.cplusplus.com/reference/cstring/strcmp/

// int Strcmp(const char *a, const char *b) {
//   while(*a == *b) {
//     if(*a == '\0') return 0;
//     a++;
//     b++;
//   }
//   return *a - *b;
// }

int main(){
  // char str1[10];
  //char stop[10] = "0:00";
  // char hh[3];
  // char mm[3];
  

  
  // scanf("%d%*c%d"
  while(1){
    int h;
    int m;
    
    if(scanf("%d%*c%d",&h,&m)!=2) break;
    // if(strcmp(str1,"0:00")==0) break;
    if(h==0 && m==0) break; 
    
    double angle;
    
    // h = atoi(hh);
    // m = atoi(mm);
    // printf("%d,%d\n",h,m);
    angle = (h*60 + m)*0.5 - m*6;
    while(angle > 180 || angle < 0){
      if (angle>180) angle= 360 - angle;
      if (angle<0) angle = 360 + angle;
    }
  
    printf("%.3f\n",angle);
  }
}
