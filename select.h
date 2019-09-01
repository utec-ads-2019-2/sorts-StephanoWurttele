#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int min=0;
            int now=0;
            for(int i=0;i<size;i++){
                now=elements[i];
                min=i;
                for(int j=i+1;j<size;j++){
                    if(elements[j]<elements[min]){
                        min=j;
                    }
                }
                elements[i]=elements[min];
                elements[min]=now;
            }
        }
                

        inline string name() { return "SelectSort"; }
};

#endif