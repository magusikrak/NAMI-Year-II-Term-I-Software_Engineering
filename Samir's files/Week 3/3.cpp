#include<iostream>
using namespace std;

double power(double, int=2);
int main(){
    double num, result;
    int pow = 0;
    char ch;

    cout<<"Entre the number "<<endl;
    cin>>num;
    cout<<"DO u want to include power Y/N "<<endl;
    cin.ignore();
    ch=cin.get();        //cin.get(ch);
    if(ch=='Y'||ch =='y'){
        cout<<"Entre the power "<<endl;
        cin>>pow;

        result=power(num,pow);
    }else{
        result=power(num);
    }

    cout<<" Output is "<<endl<<num<<" ^ "<<pow<<" = "<<result;
    return 0;
}


double power(double n, int p);
double power(double n, int p){
    double res=1.0;
    for(int i=1;i<=p;i++){
        res*=n;
    }
    return res;
}
