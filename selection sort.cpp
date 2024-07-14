# include <isotream>
using namespace std;

void selection(int a[],int n){
  int min;
  for (int i=0;i<n-1;i++){
      min=i;
  for (int j=i+1;j<n;j++){if (a[j]<a[min]){min=j;}
                         if (min!=i){swap(a[i]),a[min];}}
  }
}

int main(){
  int a[]={20,10,50,30,40};
  int n=sizeof(a)/sizeof(a[0]);
  selection(a,n);
  for (int i=0;i<n;i++){cout<<a[i]<<" ";}
}
