#include <stdio.h>

float A,ans=1;
int B;
float power(float a,int b){
 int i;
 for(i=1; i<=b; i++){
   ans *= a;
 }
 return ans;
}
int main(void){
  do{
  printf("Enter number : ");
  scanf("%f",&A);
  printf("Enter number : ");
  scanf("%d",&B);
}
while(B<0);
power(A,B);
printf("\n%f\n",ans);
  return 0;
}