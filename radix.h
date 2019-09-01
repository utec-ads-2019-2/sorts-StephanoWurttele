#ifndef RADIX_H
#define RADIX_H

#include "sort.h"
#include "stack"
#include "queue"

class RadixSort : public Sort {       
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}
        void execute() {
            int x;
            queue<int> temp[10];
            int max=elements[0];
            for (int i=0;i<size;i++){
                if(elements[i]>max)
                    max=elements[i];
            }
            for(int i=1;max/i>0;i*=10){
                x=0;
                for(int j=0;j<size;j++){
                    temp[(elements[j]/i)%10].push(elements[j]);
                }
                for(int j=0;j<size;j++){
                    while(temp[x].empty())
                            x++;
                    if(!(temp[x].empty())){
                        elements[j]=temp[x].front();
                        temp[x].pop();
                    }
                }
            }
            
        }
        inline string name() { return "RadixSort"; }
};
#endif