#ifndef UTIL_H_
#define UTIL_H_
#include "rgd.pb.h"
using namespace rgd;
bool saveRequest(const google::protobuf::MessageLite& message,
								 const char* path);

void printExpression(const JitRequest* req);

uint64_t countExprVarNum(const JitRequest* req);

#endif
