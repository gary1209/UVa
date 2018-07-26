#include <cstdio>
#include <cstdlib>

int arr1[50];

int main() {
  for(int set = 1; ; set++) {
    int n;
    scanf("%d", &n);
    if(n == 0) break;
    int total=0;    
    for(int i=0; i < n; i++){
      scanf("%d", &arr1[i]); // &arr1[i] <=> &*(arr1+i) <=> arr1+i
      total += arr1[i];
    }
    int avg = total / n;
    int temp=0;
    for(int i=0; i < n; i++){
      temp+= abs(avg -arr1[i]); 
    }
    printf("Set #%d\n",set);
    printf("The minimum number of moves is %d.\n\n",temp/2);
  }
  return 0;
}

/*
591

100
488
913
10107
10783
11059
107
130
256
264
*/
