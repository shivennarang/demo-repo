#include<iostream>
using namespace std;
class number{
    int a,b;
    public:
    void getdata(){
        cout<<"enter a and b:";
        cin>>a>>b;
    }
    void display(){
        cout<<a<<"\n";
        cout<<b;
    }
    number operator ++ (int){
        number temp;
        temp.a=a;
        temp.b=b;
        return temp;
    }
    number operator ++(){
        a=a+1;
        b=b+1;
        return *this;
    }
};
int main(){
    number n;
    n.getdata();
    ++n;
    n.display();
    n++;
    n.display();
    return 0;
}