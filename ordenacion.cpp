#include<iostream.h>
#include<string.h>
#include<math.h>

void cambio(int&a,int&b)
{
int temp=a;
a=b;
b=temp;
}

void print(int *x,int t)
{
 for(int i=0;i<t;i++)
  cout<<x[i]<<" ";
}

class Ordenar
{

public:
static bubblesort(int*a,int t)
 {
 bool cambiado=true;
 int cont=0;
 int cambios=0;
 while(cambiado==true)
  {
 cambiado=false;
 t--;
 for(int i=0;i<t;i++,cont ++)
   {
 if(a[i]>a[i+1])
 {
 cambio(a[i],a[i+1]);cambios++;
 cambiado=true;
 }
 }
 }
return cont;
}

 
static void selectsort(int *a,int t)//0n^2
{

int k,menor;
for(int i=0;i<t;i++)
 {
  menor=a[i];
  k=i;
  int cont=0;
      for(int j=i;j<t;j++,cont++) 
     {
    if(menor>a[j])   
     {
     menor=a[j];  
     k=j;
     }
  
 }
cambio(a[i],a[k]);
}

}

static void insertsort(int * a, int t) 

{

	
	for(int x = 0;x <t;++x)


		for(int y=x+1;y>0;--y)


			if(a[y]<a[y-1])


				cambio(  a[y],a[y-1]);
}


static void merge(int *A, int *B, int *C, int t1,int t2,int t3)
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
      for( k=in; k<fi; k++)
       {
           C[c]=p[k];
             c++;
       }


}

//arreglo estatico de tamaño 20
//y aplicar cada uno de los ordenamientos que hemos hecho
//falta el shellsort
//comparaciones y cambios.
static void quick(int *v, int ini, int fin) 
{
   int i=ini;
   int f=fin;
   //int cont=0;
   int p=v[(ini+fin)/2];
   do
   {
        while(v[i]<=p && i<(ini+fin)/2){
          i++;
        }
        while(v[f]>=p && f>(ini + fin)/2){ 
          f--;
	       }
        cambio(v[i], v[f]);
            i++, f--;
			}
  while(i<f);

  if(ini<f)
    quick(v,ini,f);
  if(f>i)
    quick(v,i,fin);
}

};

int main ()

{

int arreglo []={1,4,3,8,5,11,32,65,45,75};
//int arreglo2 []={1,7,3,8,5,44,32,11,0,7};
//int arreglo3 []={1,7,3,8,5,44,32,11,0,7};
//Ordenar a;
/*
//int c=ordenar::bublesort(arreglo,6);
cout<<"bubbletsort"<<endl;
a.bubblesort(arreglo,10);
int c=Ordenar::bubblesort(arreglo,10);
cout<<endl<<c<<endl;
print(arreglo,10);

cout<<endl<<"selctsort"<<endl;
a.selectsort(arreglo,10);
print(arreglo,10);

cout<<endl<<"insertsort"<<endl;
a.insertsort(arreglo,10);
//int e=Ordenar::insertsort(arreglo,5);
//cout<<endl<<c<<endl;
print(arreglo,10);*/
/*
cout<<endl<<"quicksort"<<endl;
Ordenar::quick(arreglo,0,9);
print(arreglo,10);
*/

cout<<endl<<"mergesort"<<endl;
Ordenar::merge(arreglo,arreglo2,arreglo3,5,3,2);
//a.quick(arreglo,1,10);
print(arreglo,10);
//int q=Ordenar::merge(arreglo,arreglo2,arreglo3,5,3,2);
//cout<<endl<<q<<endl;

return 1;

}

