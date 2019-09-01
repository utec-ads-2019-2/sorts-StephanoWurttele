#ifndef SORT_H
#define SORT_H

#include <algorithm>

using namespace std;


void ordenarmerge(int* elements,int inicio,int final, int centro){
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


class Sort {
    protected:
        int *elements;
        size_t size;
        
    public:
        Sort(int *elements, size_t size) : elements(elements), size(size) {}

        virtual void execute() = 0;

        virtual string name() = 0;
};

#endif