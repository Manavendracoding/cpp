#include <iostream>
 using namespace std;
 int main ()
{
  int r1, c1,r,c,i,j, A[10][10], B[10][10],sub[10][10];
  cout << "enter the value of rows :\n";
  cin >> r;
  cout << "enter the values of column  : \n";
  cin >> c;
  cout << "\n";
  cout << "enter the value of rows :\n";
  cin >> r1;
  cout << "enter the values of column  : \n";
  cin >> c1;
  cout << "\n";
  if(r==r1 && c==c1)
  {
     
    for (i = 0; i < r; i++){
      for (j = 0; j<c; j++){
  cout << "enter the element of matrix A" << i + 1 << j + 1 << ":";
      cin >> A[i][j];
      cout<<A;
      }
    }
    
    
 
  for (i = 0; i < r1; i++){
      for (j = 0; j<c1; j++){
  cout << "enter the element of matrix b" << i + 1 << j + 1 << ":";
  cin >>B[i][j];
  cout<<B;
  
      }
    }
 for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sub[i][j]=A[i][j]-B[i][j];
        
    cout<<"\n"<<"diff of two matrix is:\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            cout<<sub[i][j]<<" ";
            if(j ==c-1)
            cout<<endl;
        }
  }
  else
  {
      cout<<"ERROR";
  }
return 0;
}