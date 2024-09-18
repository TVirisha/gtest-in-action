//void alertInCelcius(float farenheit);
//int getFailureCount();
//Abstraction using class Interface
//In c we used functionpointer now we ask compiler to create functionpointer
class INetworkAlerter{
public:
   //function pointer in c++
   virtual int alert(float celcius)=0;
};
int alertInCelciusFacade(float farenheit,INetworkAlerter *networkAlerterPtr);
