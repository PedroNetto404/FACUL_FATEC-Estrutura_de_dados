#pragma once

#include <string>

#include "Stack.h"

StackPointer CreateStack(); 

int getNodeValue(StackPointer);

bool push(int, StackPointer);

bool pop(StackPointer);

int count(StackPointer);



