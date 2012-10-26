#include "gtest/gtest.h"
#include "../src/AArray/TwoDArray.h"

TEST(TwoDArrayTest, insert) {
  TwoDArray<int>* td = new TwoDArray<int>(10, 10, 0);
  td->insert(5, 4, 10);
  td->insert(5, 5, 9);
  td->insert(5, 6, 8);


  EXPECT_EQ(10, td->access(5, 4));
  EXPECT_EQ(8, td->access(5, 6));
  delete td;
}

TEST(TwoDArrayTest, access) {
  TwoDArray<int>* td = new TwoDArray<int>(100, 100, 42);
  td->insert(25, 25, 1);
  td->insert(25, 26, 2);
  td->insert(26, 25, 3);
  td->insert(26, 26, 4);
  
  EXPECT_EQ(42, td->access(0, 0));
  EXPECT_EQ(4, td->access(26, 26));
  delete td;
}

TEST(TwoDArrayTest, remove) {
  TwoDArray<int>* td = new TwoDArray<int>(10, 10, 42);
  td->insert(5, 5, 12);
  
  td->remove(5, 5);
  EXPECT_EQ(42, td->access(5,5));
  delete td;
}

