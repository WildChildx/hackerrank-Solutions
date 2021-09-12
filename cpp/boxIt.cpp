#include<bits/stdc++.h>
using namespace std;
class Box{
    int l,b,h;
    public:
    //initilized everything to zero
    Box():l(0),b(0),h(0){};
    //accept length and set the variables
    Box(int length,int breadth,int height){
        l=length;
        b=breadth;
        h=height;
    }
    //copy constructors
    Box NewBox(int length,int breadth,int height){
        Box temp;
        temp.l=length;
        temp.b=breadth;
        temp.h=height;
        return temp;
    }

    friend ostream & operator << (ostream &out,  Box &c);
    friend bool operator < (Box &b1 ,Box &b2);

    int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
};

//overloading >> 'extraction' operator
ostream & operator <<(ostream &out , Box &obj){
    out<<obj.l<<" "<<obj.b<<" "<<obj.h;
    return out;
} 

//overloading < 'less than'  operator
bool operator < (Box &b1,Box &b2){
    if( (b1.l<b2.l) || ((b1.b<b2.b)&&(b1.l==b2.l)) || ((b1.h<b2.h)&&(b1.b==b2.b)&&(b1.l==b2.l) )){
        return true;
    }else{
        return false;
    }
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}