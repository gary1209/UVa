#include <cstdio>
#include <algorithm>

class my_array{
  private:
    int len=0;
  public:
  my_array(){
  
  }
  
  my_array* sort(){
  
  }
  
  my_array* append(int n){
  
  }
  
  int length(){
  
  }
  
  virtual ~my_array(){
    
  }
  
};

int main(){
  my_array arr1;
  while(1){
    int n1;
    scanf("%d", &n1);
    arr1.append(n1);
    arr1.sort();
    int length = arr1.lenght();
    if(lenght % 2 == 1){
      printf("%d\n", arr1[length/2]);
    }else{
      pritnf("%d\n", (arr1[length/2-1]+arr1[length/2])/2);
    }
  }
}
