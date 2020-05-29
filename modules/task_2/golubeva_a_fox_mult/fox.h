// Copyright 2020 Golubeva Anna
#ifndef MODULES_TASK_2_GOLUBEVA_A_FOX_MULT_FOX_H_
#define MODULES_TASK_2_GOLUBEVA_A_FOX_MULT_FOX_H_

#include <vector>
#include <omp.h>

using Matrix = std::vector<std::vector<double>>;

bool isSquare(const Matrix &A);
bool canBeMultiplied(const Matrix &A, const Matrix &B);
Matrix simpleMult(const Matrix& A, const Matrix& B);
Matrix foxMult(const Matrix& A, const Matrix& B, const int & numThreads);
Matrix foxMultSeq(const Matrix& A, const Matrix& B, const int &blockSize);
Matrix randMatrix(const int& n);

#endif  // MODULES_TASK_2_GOLUBEVA_A_FOX_MULT_FOX_H_
