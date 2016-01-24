#include "gtest/gtest.h"

TEST( SimpleTest, Addition ) {

  EXPECT_EQ( 1, 0 + 1 );
  EXPECT_EQ( 2, 1 + 1 );
  EXPECT_EQ( 5, 2 + 3 );
  
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}
