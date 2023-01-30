// Copyright 2021 NNTU-CS

#include <gtest/gtest.h>
#include "alg.h"


TEST(lab1, test1) {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5};
    int count = cbinsearch(arr, 15, 3);
    EXPECT_EQ(3, count);
}

TEST(lab1, test2) {
    int arr[] = {1, 2, 2, 13, 13, 13, 14, 14, 14, 14, 15, 15, 15, 15, 15};
    int count = cbinsearch(arr, 15, 3);
    EXPECT_EQ(0, count);
}

TEST(lab1, test3) {
    int arr[] = {12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
    int count = cbinsearch(arr, 15, 12);
    EXPECT_EQ(15, count);
}

TEST(lab1, test4) {
    int size = 65536;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        arr[i] = i;
    int count = cbinsearch(arr, size, 1024);
    delete arr;
    EXPECT_EQ(1, count);
}
