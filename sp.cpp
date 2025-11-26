#include<iostream>
using namespace std;
int main(){
int n,e;
cout<<"Enter number of vertices : ";
cin>>n;
cout<<"Enter number of edges(already sorted)";
cin>>e;
int u[100], v[100], w[100];
cout<<"Enter edges in ascending order ";
for(int i=0; i<e; i++){
    cin>>u[i]>>v[i]>>w[i];
}
int comp[100];
for(int i=0; i<n; i++)
    comp[i]=i;
    int mstweight = 0, count = 0;
    cout<<"Edges selected for MST ";

    for(int i = 0; i<e&&count<n-1; i++)
    {
        int a=u[i];
        int b=v[i];

         if(comp[a] != comp[b]){
            cout<<a<<"--"<<b<<"(weight"<<w[i]<<")"<<endl;
            mstweight += w[i];
            count++;
            int oldC = comp[b];
            int newC = comp[a];
            for(int k=0; k<n; k++)
            {
                if(comp[k]== oldC)
                comp[k] = newC;
            }
         }
    }

     cout<<"\nTotal weight = "<<mstweight;
     return 0;
    }
