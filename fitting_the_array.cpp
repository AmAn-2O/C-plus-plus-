#include<iostream>
using namespace std;
int main(){
    int arr[4]={7,5,3,2};
    int brr[4]={5,4,8,7};
for(int i=0;i<4;i++){
    if (arr[i]<=brr[i]){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}

    return 0;
}