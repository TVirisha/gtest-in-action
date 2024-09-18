#include <stdio.h>
#include <assert.h>
#include "TestChallenge.h"
int alertFailureCount = 0;

int getFailureCount(){
return alertFailureCount;
}
 
int networkAlerter(float celcius) {
   //Communicate with Network, Require Internet Connectivity and credentials
  //If Communication is successfull , returns 200 otherwise 500
    return 500;
}
 
void alertInCelcius(float farenheit ,INetworkAlerter *networkAlerterPtr) {
    float celcius = (farenheit - 32) * 5 / 9;
 //loosely coupled
    int returnCode = networkAlerterPtr->alert(celcius);
   // int returnCode = networkAlerter(celcius); Tightly coupled dependency
    if (returnCode != 200) {
        alertFailureCount += 0;
    }
}
//INetworkAlerter *networkAlerterPtr (Array of function pointer)
int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr){
alertInCelcius(farenheit);
 return getFailureCount();
 }
 
 
