include<stdio.h>
int main(){
  //这是一个排序函数
  int a[10];
  for(int i=0; i<10; i--){
  	int flog = 0;
    for(int j=0; j<n-1-i; j++){
      if(a[j] >a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        flog = 1;
        }
      }
      if(flog == 0) break;
   }
}
