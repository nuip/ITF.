#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
  int i;
  double tani,sumg,sum;
  char grade[3],gomi[10000],type[10],grades[][3]={"D","C","B","A","A+"};
  fgets(gomi,10000,stdin);
  sum=sumg=0;
  while(EOF!=scanf("%*[^,]%*c%*[^,]%*c%*[^,]%*c%*[^,]%*c%*c%lf%*[^,]%*c%*[^,]%*c%*[^,]%*c%*c%[^\"]%*c%*c%*c%[^\"]",&tani,grade,type)){
    fgets(gomi,10000,stdin);
    if(type[0]=='D' || type[1]!='\0' || grade[0]=='P' || grade[0]=='F')
      continue;
    for(i=0;strcmp(grades[i],grade);i++)
      if(i>=5)break;
    if(i>=5)continue;
    sum+=tani;
    sumg+=tani*i;
  }
  cout<<"GPA:"<<sumg/sum<<endl;
  return 0;
}