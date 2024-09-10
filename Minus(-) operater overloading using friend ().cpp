#include<iostream>
class space{ int a;
int b;
int c;
public:
void getdata(int x,int y,int z);
void display ();
void friend operator-(space &p);// pass by reference
};
void space::getdata(int x,int y,int z){
a=x;
b=y;
c=z;
}
void space:: display()
{ cout<<"A:"<<a<<"B:"<<b<<"C:"<<c<<endl;
}
void (-space &p)
  { p.a=-p.a;
p.b=-p.b;
p.c=-p.c;
  }
int main(){ space S;
S.getdata(10,-20,30);
cout<<"S :";
S.display();
-S;
cout<<"-S:";
S.display();
return 0;
 }
