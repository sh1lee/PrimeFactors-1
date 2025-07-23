#include "gmock/gmock.h"
#include "prime-factors.cpp"
using namespace testing;
class PrimeFixture : public Test {
public:
    PrimeFactors prime_factor;
    vector<int> expected;
};
TEST_F(PrimeFixture, PrimTest) {
    PrimeFactors prime_factor;
    expected = {};
    EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFixture, Of2) {
    PrimeFactors prime_factor;
    expected = {2};
    EXPECT_EQ(expected, prime_factor.of(2));
}