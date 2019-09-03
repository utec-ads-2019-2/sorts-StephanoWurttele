#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

/*void ordenarmerge(int* elements,int inicio,int final, int centro){
                int t1=centro-inicio+1;
                int t2=final-centro;
                cout<<"t2 es "<<t1<<" y otra cosa es"<<centro+1;
                cout<<"t2 es "<<t2<<" y otra cosa es"<<inicio;
                int temp1[t1],temp2[t2];
                for(int i=0;i<t1;i++)
                    temp1[i]=elements[inicio+i];
                for(int i=0;i<t2;i++)
                    temp2[i]=elements[centro+1+i];
                int i=0,j=0,k=0;
                while(i<t1 && j<t2){ 
                    if (temp1[i] <= temp2[j]) { 
                        elements[k] = temp1[i]; 
                        i++; 
                    } 
                    else{ 
                        elements[k] = temp2[j]; 
                        j++; 
                    } 
                    k++; 
                } 
                while(i<t1){ 
                    elements[k] = temp1[i]; 
                    i++; 
                    k++; 
                } 
                while(j<t2){ 
                    elements[k] = temp1[j]; 
                    j++; 
                    k++; 
                } 
            };
*/

void merge(int* elements, int inicio, int final){
                int centro;
                if(inicio<final)
                    centro=(inicio+final)/2;
                    merge(elements,inicio, centro);
                    merge(elements, centro+1, final);
                    ordenarmerge(elements, inicio, final, centro);
            };

class MergeSort : public Sort {       
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {

            /*const auto ordenar = [&](const auto ordenar,int inicio,int final, int centro)->void{
                int t1=centro-inicio+1;
                int t2=final-centro;
                cout<<"t2 es "<<t1<<" y otra cosa es"<<centro+1;
                cout<<"t2 es "<<t2<<" y otra cosa es"<<inicio;
                int temp1[t1],temp2[t2];
                for(int i=0;i<t1;i++)
                    temp1[i]=elements[inicio+i];
                for(int i=0;i<t2;i++)
                    temp2[i]=elements[centro+1+i];
                int i=0,j=0,k=0;
                while(i<t1 && j<t2){ 
                    if (temp1[i] <= temp2[j]) { 
                        elements[k] = temp1[i]; 
                        i++; 
                    } 
                    else{ 
                        elements[k] = temp2[j]; 
                        j++; 
                    } 
                    k++; 
                } 
                while(i<t1){ 
                    elements[k] = temp1[i]; 
                    i++; 
                    k++; 
                } 
                while(j<t2){ 
                    elements[k] = temp1[j]; 
                    j++; 
                    k++; 
                } 
            };*/

            
            for(int i=0;i<size;i++)
                cout<<elements[i]<<" ";
            cout<<endl;
            merge(elements,0,size-1);
        }

        inline string name() { return "MergeSort"; }
};

#endif