#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>
#include <vector>
struct numero{
    int num;
    int count;
};


class CountingSort : public Sort {       
    public:
        CountingSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute(){
            vector<int> elementos(size);
            int j=0;
            int z=0;
            for(int i=0;i<size;i++){
                elementos[i]=elements[i];
            }
            int min=*min_element(elementos.begin(),elementos.end());
            int range = ((*max_element(elementos.begin(),elementos.end())-min+1));
            vector<int> temp(range,0);
            for (int i=0;i<elementos.size();i++){
                temp[elementos[i]-min]++;
            }
            for (int i=0;i<range;i++){
                z=temp[i];
                while(z!=0){
                    elements[j]=i;
                    j++;
                    z--;
                }
            }
        }
        inline string name() { return "CountingSort"; }
};

#endif