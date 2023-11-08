#include <iostream>

int main(){
    int l1[] {2,4,3}; int l2[] {5,6,4};
    int size1 = sizeof(l1)/sizeof(l1[0]); int size2 = sizeof(l2)/sizeof(l2[0]); 
    int multi1 =1; int multi2 =1;
    int sum1; int sum2;
    for(int i= size1-1; i >= 0; i-- ){
       int x = l1[i];  
       int temp = x * multi1;
       sum1 = sum1 + temp; multi1 = multi1* 10;
    }  for(int j= size2-1; j >= 0; j--){
       int x = l2[j]; 
       int temp2 = x * multi2;
       sum2 = sum2 + temp2; multi2 = multi2 * 10;
    }
    sum1 = sum1 +sum2;
      if(sum1 == 807){
         std::cout << "True << '\n'";
         } else{
              std::cout << "False" << '\n'
                }






}