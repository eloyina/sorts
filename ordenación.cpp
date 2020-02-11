#include <iostream.h>

//Metodos de Ordenacion
//bublesort
void llenar( int *v, int tam)
{
   for(int i=0; i<tam; i++)
     cin>>v[i];
}

void imprimir( int *v, int tam)
{
   for(int i=0; i<tam; i++)
     cout<<v[i]<<",";
}

void swap(int&a, int&b)
{
    int temp =a;
    a=b;
    b=temp;
}

void ordenar(int *v, int tam)
{
       bool flag=true;
       for(int j=0; j<tam && flag==true; j++)
       {
          flag=false;
            for(int i =0; i<tam-1-j; i++)
              {
                    if (v[i]>v[i+1])
                      {
                           swap(v[i], v[i+1]);
                           flag=true;
                      }
              }
       }
}

//insert sort

void insert(int *v, int tam)
{
   int i =0,j;
   int m=v[i];
      for(int j=i-1; m<v[i]&&j>=0; j--)
    {
        m=v[i];
        for(   ; i<tam; i++)
        {
            for( j=i-1; m<v[i]&&j>=0; j--)
            {
                v[j+1]=v[j];
            }
            v[j+1]= m;
        }
    }
}

//merge

void merge(int *A, int *B, int *C, int t1,int t2,int t3)
{
    int i=0, j=0,c=0,k=0;
    
     while(i<t1 && j<t2)
      {
           if (B[j]<A[i])
          {
            C[c]=A[i];
              c++, i++;
          }
           if(A[i]<B[j])
           {
               C[c]=B[j];
                 c++, j++;
           }
      }
      int *p, in, fi;
      if(i!=t1)
      {  
        p=B;
        in=i;
        fi=t1;
      }
      else
        p=A;
        in=j;
        fi=t2;
      for(int k=in; k<fi; k++)
       {
           C[c]=p[k];
             c++;
       }


}

//quick
void quick(int *v, int ini, int fin)
{
   int i=ini;
   int f=fin;
   int p=v[(ini+fin)/2];
   do
     {
        while(v[i]<=p && i<(ini+fin)/2){
          i++;
        }
        while(v[f]>=p && f>(ini + fin)/2){
          f--;
        }
        swap(v[i], v[f]);
            i++, f--;
     }
  while(i<f);

  if(ini<f)
    quick(v, ini, f);
  if(f>i)
    quick(v, i, fin);
}



int main()
{
  int s[5], a[5], c[10];
llenar(s,5);
llenar(a,5);
merge(s,a,c,5,5,10);
imprimir(c,10);

