#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=0 ; i<N ; i++){
        for(int j=0 ;j<i; j ++){
        printf(" ");
        }
        for(int k=N ; k>i; k --){
        printf("*");
        }
        printf("\n");
    }
   return 0;
}