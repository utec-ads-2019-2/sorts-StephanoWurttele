#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int gap=size/2;
            int temp,temp2=0;
            bool divide=0;

            while(temp2!=2){
                if(divide==1){
                    temp2++;
                    gap=gap/2;
                }
                divide=1;
                for(int j=0;j<size;j++){
                    if((j+gap>=size))
                        break;
                    if(elements[j]>elements[j+gap]){
                        temp=elements[j];
                        elements[j]=elements[j+gap];
                        elements[j+gap]=temp;
                        divide=0;
                        temp2=0;
                    }
                }

                for(int j=0;j<size;j++){
                    if((j+1+gap>=size))
                        break;
                    if(elements[j+1]>elements[j+1+gap]){
                        temp=elements[j+1];
                        elements[j+1]=elements[j+1+gap];
                        elements[j+1+gap]=temp;
                        divide=0;
                        temp2=0;
                    }
                }
            }
        }
        inline string name() { return "ShellSort"; }
};

#endif