// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<sstream>
using namespace std;
class BigDecimalInt {
public:
    BigDecimalInt test(BigDecimalInt& am){
        int s=am.name.length()-name.length();
    	    if (am.name.length()>name.length()){
	        for(int i=0;i<s;i++){
                name="0"+name;
	        }
	        return BigDecimalInt(name);
	    }
	     else if (name.length()>am.name.length()){
                s=name.length()-am.name.length();
	        for(int i=0;i<s;i++){
                am.name="0"+am.name;
	        }
	     }
	        else {
                	        return BigDecimalInt(name);
                	        	        return BigDecimalInt(am.name);}




return BigDecimalInt(am.name);


	    }



	BigDecimalInt(){}
		BigDecimalInt(int int1,int int2 ,int int3,int int4){cout<<int1<<int2<<int3<<int4;}

	BigDecimalInt(string num) {
         name=num;

	}


	void operator+(BigDecimalInt am){

	    int s=name.length();
	    string z;
        int x;
        int y;
        int carry=0;
        int sum;
        int arr[s-1];
	    for (int i=s-1;i>=0;i--){
                 z=name[i];
                 x=stoi(z);
                 z=am.name[i];
                 y =stoi(z);

                 sum=x+y+carry;
                 if ((sum)>9){
                    sum=(sum)%10;
                    carry=(sum)/10;
                    arr[i]=sum;
                 }
                 else
                    arr[i]=x+y;



	}
	arr[0]=carry;
    for (int i=s-1
         ;i>0;i--){
            cout<<arr[i];}
	}
    	BigDecimalInt operator-(BigDecimalInt am){




cout<<x11<<x12<<x13<<x14;



    }
private:
    string name;
	string x1 = "";
	string x2 = "";
	string x3 = "";
	string x4 = "";
	int x11=0;
	int x12=0;
	int x13=0;
	int x14=0;



};
int main()
{
        BigDecimalInt a("99");
        BigDecimalInt z("99");
        a.test(z);
       a+z;

    return 0;
}

