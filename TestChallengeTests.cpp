#include<gtest/gtest.h>
#include "TestChallenge.h"
//stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
   int alert(float celcuis overide{
     return 500;
   }
};

TEST(NetworkAlertTestSuite , stateBasedTest){
    int failureCount=  alertInCelciusFacade(400,&stub);
    ASSERT_EQ(failureCount,1);
}
