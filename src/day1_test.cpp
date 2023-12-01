#include "day1.h"

#include <catch2/catch.hpp>

TEST_CASE("calibration_returns_nil_if_empty") {
  REQUIRE(ComputeCalibration("") == 0);
}

TEST_CASE("calibration_returns_nil_if_empty") {
  REQUIRE(ComputeCalibration("data/day1-input-test.txt") == 142);
}
