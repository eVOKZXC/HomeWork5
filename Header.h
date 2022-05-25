#pragma once
#ifndef Header
#define Header
#endif Header

#include <iostream>
#include <cstdlib>
#include <memory>
#include <ctime>
#include <algorithm>

using namespace std;

////////////////////////////////////////////////

int firstFoo();
shared_ptr<double[]> makeSharedFoo(int size);
void createData(int size, shared_ptr<double[]> mas);
void printData(int size, shared_ptr<double[]> mas);

////////////////////////////////////////////////

int secondFoo();
void createData(shared_ptr<int[]> mas);
void swapFoo(shared_ptr<int[]> mas);
void printData(shared_ptr<int[]> mas);

////////////////////////////////////////////////

int thirdFoo();
void createData(int rows, int columns, shared_ptr<shared_ptr<int[]>[]> mas);
void printData(int rows, int columns, shared_ptr<shared_ptr<int[]>[]> mas);

////////////////////////////////////////////////