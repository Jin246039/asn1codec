#!/usr/bin/env bash
# -*- coding: utf-8 -*-
# Description: run all test suites
make clean
export CC="clang++ -std=c++11"
make tests
./tests/suites/all_suites
