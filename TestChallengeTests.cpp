#include<gtest/gtest.h>
#include "TestChallenge.h"
#include<gmock/gmock.h>
using testing::FloatEq//matcher used to test on method argument
using testing::Return;///Return value of mock function 
//stub - Fake Dependency
class NetworkAlerterStub:public INetworkAlerter{
public:
   int alert(float celcuis overide{
     return 500;
   }
};
//Mock Implementationx
class NetworkAlerterMock:public INetworkAlerter{
public:
   MOCK_METHOD(int , alert,(float celcius));
};

TEST(NetworkAlertTestSuite , stateBasedTest){
    int failureCount=  alertInCelciusFacade(400,&stub);
    ASSERT_EQ(failureCount,1);
}

TEST(NetworkAlertTestSuite , InteractionTest){
    NetworkAlerterMock mock;)
   //Macro EXPECT_CALL(mockObject , method(Matcher).Times(Frequency).willOnce/Repeat(Action)
    EXPECT_CALL(mack,alert(FloatEq(204.444))).Times(1).willOnce(Return(500));
    int failureCount=  alertInCelciusFacade(400,&mock);
    ASSERT_EQ(failureCount,1);
}
