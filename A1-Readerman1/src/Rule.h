#ifndef Rule_H
#define Rule_H
Class Rule{
private :
char fromChar;
string toString;
public :
  Rule(){
  fromChar='D';
  toString="default";
  }
  ~Rule(){
    fromChar=' ';
    toString=" "; 
  }
void setfromChar(std::char a){
    a=fromChar;
 }
void settoString(std::string b){
    b=toString;
 }
 string getfromChar(){
    return fromChar;
 }
 char gettoString(){
    return toString;
 }
 };
 #endif  
