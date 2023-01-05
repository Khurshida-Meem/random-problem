#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[6] = {10,6,3,8,4,3};
    int maximum=0, secondMax = 0;
    for(int i=0;i<6;i++){
        if(ar[i] > maximum){
            maximum=ar[i];
        }
        else{
            if(ar[i] < maximum && ar[i] > secondMax){
                secondMax =ar[i];
            }
        }
    }
    cout<<"Maximum = "<<maximum<<endl;
    cout<<"Second Maximum = "<<secondMax<<endl;
}
