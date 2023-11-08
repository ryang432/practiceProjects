#include <iostream>

int main(){
    int array[] {3,4,6,7}; int num; int count;
    do{
std:: cout << "Please enter your sum number:" << '\n';
std:: cin >> num;

for(int i =0; i < sizeof(array)/sizeof(array[0]); i++){
    for(int j=0; j < sizeof(array)/sizeof(array[0]); j++){
        if(array[i] +array[j] == num){
            std:: cout << "The numbers " << array[i] << " and " << array[j] << " in the array are equal to your inputted number: " << num << '\n';
            count++;
        }
    }
}
if( count == 0){
    std::cout << "No match found" << '\n';
}
    } while(count ==0);

    return 0;
}