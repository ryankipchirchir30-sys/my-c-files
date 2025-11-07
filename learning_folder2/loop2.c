#include<stdio.h>
int main(){
// continue = skips the rest of the code  & forses the next iteration
// break = exits a loop or a switch



for(int i = 1 ; i <= 20;i++){
if (i == 13){
//continue;// the number 13 is skipped but the rest of the numbers continue till 20
break;//this terminates the program at the number 13
}
printf("%d\n",i);
}



    return 0;
}