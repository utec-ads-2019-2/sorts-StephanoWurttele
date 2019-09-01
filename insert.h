#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int min=0;
            int now=0;
            int respuesta[size]={0};
            for(int i=1;i<size;i++){
                now=elements[i];
                for(int j=i;j>0;j--){
                    if(elements[j]>elements[i]){
                        elements[j]=elements[i];
                        break;
                    }
                    elements[j]=elements[j-1];
                }
            }
    }

        inline string name() { return "InsertSort"; }
};

#endif