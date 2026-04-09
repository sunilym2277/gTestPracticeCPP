#include "../Example.hpp"
#include <gtest/gtest.h>
int p=12;
bool f()
{
   p=32;
   return false;
}

TEST(ExampleTests, MAC)
{
   int x =10;
   int y = 20;
   int sum = 100;
   int oldsum =sum;
   int newsum = oldsum +(x* y);

   EXPECT_EQ(sum, MAC(x,y,sum));
   EXPECT_EQ(newsum, MAC(x,y,sum));
}

TEST(ExampleTests, DemonstrateGTestsMacros) {
   // EXPECT_TRUE(true);
   // ASSERT_TRUE(false);


   // EXPECT_EQ(true,true);
   // ASSERT_EQ(true,true);

   // const bool result = f();
   // EXPECT_TRUE(result);
   // EXPECT_EQ(result, false) << "Hello World!" << p;

   // for(int i=1;i<8;i++)
   // {
   //    EXPECT_EQ(i<4,true) << "I value is : " << i;
   // }
   
}