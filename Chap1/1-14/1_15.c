/*Exe 1-15: rewrite the CtoF function to realized in the method of FUNCTION*/
/*
Engineer: Tony Z
Time: Oct 28, 2012
Place: Apt #2
*/

#include <stdio.h>

float CtoF(int C);  //the name of the parameter is not necessary to be the 
                    //same as the one in the defined later

/*test the CtoF function*/
 main(){
    int celus;            //celus is a localized parameter in main
    int lower, higher, step;
    lower = 0;
    higher = 400;
    step = 15;
    
    celus = lower;
    while(celus < higher){
        printf("%3.2d ==> %2.8f\n", celus, CtoF(celus));    
        celus = celus + step;
    }
    return 0;
}

/*define the CtoF function*/
 float CtoF(int celus){     //celus here is a localized parameter in CtoF
    //int C_temp;
    return (4.0/7.0)*(celus-32);   
}