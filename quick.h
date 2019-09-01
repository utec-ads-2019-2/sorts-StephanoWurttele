#ifndef QUICK_H
#define QUICK_H

#include "sort.h"
#include <algorithm>
class QuickSort : public Sort {
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int temp;
            const auto ordenar = [&](const auto ordenar, int* inicio, int* final) -> void {
            int *pivot1=inicio;
            int temp;
            int *pivot2=final;
            int y=(int)(final-inicio)/2;
            int *current=pivot1;
            for(int i=0;i<y;i++){
                current++;
            };
            if(!(pivot1==current && pivot2==current)){
                while(pivot1!=pivot2){
                    while (*pivot1<*current && pivot1<(current)){
                        ++(pivot1);
                    }
                    while (*pivot2>*current && pivot2>(current)){
                        --(pivot2);
                    }
                    if(*pivot1==*pivot2){
                        if(pivot1==pivot2){
                            break;
                        }
                        if(pivot1==current){
                            --pivot2;
                        }
                        else if(pivot2==current){
                            ++pivot1;
                        }
                        else{
                            --pivot2;
                        }
                    }
                    temp=*pivot1;
                    *pivot1=*pivot2;
                    *pivot2=temp;
                    if(pivot1==current){
                        current=pivot2;
                    }
                    else if(pivot2==current){
                        current=pivot1;
                    }
                }
                if(current>=elements){
                    ordenar(ordenar,inicio,current);
                if(current+1<=final){
                    ordenar(ordenar,current+1,final);
                }
                }
            }
            };
        ordenar(ordenar, &elements[0],&elements[size-1]);
        }
        inline string name() { return "QuickSort"; }
};
#endif