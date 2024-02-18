#include <gtest/gtest.h>
#include "functions.cpp"

using namespace std;

TEST(TestGroupName, isPrime_true) {
  ASSERT_TRUE(isPrime(2));
  ASSERT_TRUE(isPrime(3));
  ASSERT_TRUE(isPrime(11));
  ASSERT_TRUE(isPrime(17));
  ASSERT_TRUE(isPrime(23));
}

TEST(TestGroupName, isPrime_false) {
  ASSERT_FALSE(isPrime(-1));
  ASSERT_FALSE(isPrime(0));
  ASSERT_FALSE(isPrime(1));
  ASSERT_FALSE(isPrime(10));
  ASSERT_FALSE(isPrime(120));
  ASSERT_FALSE(isPrime(77));
}

TEST(TestGroupName, nextPrime) {
    ASSERT_EQ(nextPrime(10), 11);
    ASSERT_EQ(nextPrime(-10), 2);
    ASSERT_EQ(nextPrime(13), 17);
    ASSERT_EQ(nextPrime(121), 127);
    ASSERT_EQ(nextPrime(1000), 1009);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}