#include<iostream>
#include<fstream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{

string inpath = "";  //input file path (inpath) is stored in string
string outpath ="";


//input file path and output file path is given from command line interface
cout<<"Enter path of the input file:" ;
getline(cin,inpath);
cout<<"Enter path of the output file: " ;
getline(cin,outpath);
ifstream infile(inpath.c_str());
ofstream outf(outpath.c_str());

vector<pair<double,pair<double,double>>> vec;//data is stored in vector form
double z[3];
double x[3];
double y[3];

while(infile)
{
   for(int i=0;i<3;i++)
   {
    infile>> x[i];
   }


   for(int i=0;i<3;i++)
   {
    infile>>y[i];
   }
}
    
for(int i=0;i<3;i++)
{
    z[i]=sqrt(x[i]*x[i]+y[i]*y[i]);

    vec.push_back({z[i],{x[i],y[i]}});
}

   sort(vec.begin(),vec.end()); //sort function used for sorting the vector



for(int i=0;i<3;i++) //to store result in output file
{
outf<< vec[i].first <<" ";
outf<< vec[i].second.first <<", ";
outf<< vec[i].second.second <<" \n";
}


cout<<"data entry into output file is successful";

infile.close();
outf.close();


return 0;

}