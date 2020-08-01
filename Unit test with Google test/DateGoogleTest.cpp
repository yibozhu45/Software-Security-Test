//Yibo Zhu

#include "Date.h"
#include <gtest/gtest.h>

TEST(BooleanOperators, DateTest)
{
  Date x(2020, 4, 15);
  Date y;
  Date z("20200414");
  Date d(1997, 4, 5);
  EXPECT_EQ(x<y,true);
  EXPECT_EQ(x<=y,true);
  EXPECT_EQ(x!=y,true);
  EXPECT_EQ(x!=y,true);
  EXPECT_EQ(x==x,true);
  EXPECT_EQ(x>=x,true);
  EXPECT_EQ(x<=x,true);
  EXPECT_EQ(z<x,true);
  EXPECT_EQ(x>z,true);
  EXPECT_EQ(x>=z,true);
  EXPECT_EQ(x!=z,true);
  
}

TEST(FunctionDate, DateTest)
{
  Date x(2020, 4, 15);
  Date y;
  Date z("20200414");
  Date d(1997, 4, 5);
  EXPECT_EQ(x.getYear()==2020, true);
  EXPECT_EQ(x.getMonth()==4, true);
  EXPECT_EQ(x.getDay()==15, true);
  EXPECT_EQ(z.getYear()==2020, true);
  EXPECT_EQ(z.getMonth()==4, true);
  EXPECT_EQ(z.getDay()==14, true);
  EXPECT_EQ(x.toString()=="20200415", true);
  EXPECT_EQ(z.toString()=="20200414", true);
}

TEST(FunctionDuration, DateTest)
{
  Date x(2020, 4, 15);
  Date y;
  Date z("20200414");
  Date d(1997, 4, 5);
  Date::Duration xd_dur(0000,0,0);
  xd_dur = duration(x,d);
  EXPECT_EQ(xd_dur.years==23,true);
  EXPECT_EQ(xd_dur.months==0,true);
  EXPECT_EQ(xd_dur.days==10,true);
}
int main(int argc, char **argv) 
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
