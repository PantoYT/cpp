#include <iostream>
using namespace std;
struct para{
    int a;
    int b;
};
int main() {
    int n;
    cin>>n;
    para parzyste[n];
    para nieparzyste[n];
    int p_count=0,np_count=0;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if (a%2==0){
            parzyste[p_count++]={a,b};
        } else {
            nieparzyste[np_count++]={a,b};
        }
    }
    for (int i=0;i<p_count-1;i++){
        for (int j=0;j<p_count-1-i;j++){
            if( parzyste[j].a>parzyste[j+1].a){
                swap(parzyste[j],parzyste[j+1]);
            }
        }
    }
    for (int i=0;i<np_count-1;i++){
        for (int j=0;j<np_count-1-i;j++){
            if (nieparzyste[j].a>nieparzyste[j+1].a){
                swap(nieparzyste[j],nieparzyste[j+1]);
            }
        }
    }
    for(int i=0;i<p_count;i++){
        cout<<parzyste[i].b<<" ";
    }
    for(int i=0;i<np_count;i++){
        cout<<nieparzyste[i].b<<" ";
    }
    return 0;
}
