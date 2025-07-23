#include "gmock/gmock.h"
#include "prime-factors.cpp"

TEST(PrimeFactors, PrimTest) {
    PrimeFactors prime_factor;
    vector<int> expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}