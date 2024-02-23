#include<iostream>
using namespace std;
int main()
/*{
  int age=21;
  cout<<"my age is "<<age<<endl;
  return 0;
}
*/
{
  //for short int it will provide 2byte as o/p
  short int a;//variable declaration
  a=12; //intialization
  /*The sizeof is a keyword, but it is a compile-time operator that determines the size, in bytes, of a variable or data type.*/
  cout<<"the size of short int variable is "<<sizeof(a)<<endl;
  long int vari;
  cout<<"the size of long integer varaiable is "<<sizeof(vari)<<endl;
  int in=45;
  cout<<"the size of int variable is "<<sizeof(in)<<endl;
  
  float flv;
  flv=45.18;
  cout<<"The size of the float variable is "<<sizeof(flv)<<endl;

  double db=123.7485151;
  cout<<"the size of double variable is "<<sizeof(db)<<endl;

  char c;
  cout<<"the size of the character vairable is "<<sizeof(c)<<endl;

  bool d;
  cout<<"the size of the boolean variable is "<<sizeof(d)<<endl;
  
  return 0;
}