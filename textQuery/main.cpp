#include<iostream>
#include<fstream>
#include<string>
#include"textquery.h"

using namespace std;

ostream& print(ostream& os,const QueryResult &qr){
    os<<qr.sought <<" ocurs " <<qr.lines->size() <<" "
     <<"times"<<endl;
    for (auto num:*qr.lines){
        os<<"\t(line "<<num+1<<") "
         << *(qr.file->begin()+num)<<endl;
    }
    return os;
}

void runQueries(ifstream &infile){
  TextQuery tq(infile);
  while (true) {
      cout<<"enter word to look for, or q to quit:  ";
      string s;
      if(!(cin>>s)||s=="q")
          break;
      print(cout,tq.query(s))<<endl;
  }
}

int main(int argc,char* argv[]){
   ifstream testFile("test.txt");
   if(testFile.is_open()){
       runQueries(testFile);
       testFile.close();
   } else {
       cout<<"can't open test file!"<<endl;
   }
   return 0;
}
