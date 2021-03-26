#include "IR/IR.h"
#include "IR/LLVMContext.h"
#include "IR/Module.h"
#include "IR/Type.h"
#include "IR/IntegerType.h"
#include "IR/PointerType.h"
#include "IR/FunctionType.h"
#include "IR/StructType.h"
#include "IR/ArrayType.h"
#include "IR/Value.h"
#include "IR/User.h"
#include "IR/Constant.h"
#include "IR/ConstantInt.h"
#include "IR/ConstantFP.h"
#include "IR/GlobalValue.h"
#include "IR/GlobalObject.h"
#include "IR/GlobalVariable.h"
#include "IR/Function.h"
#include "IR/Argument.h"
#include "IR/BasicBlock.h"
#include "IR/IRBuilder.h"
#include "IR/Verifier.h"

void InitIR(Napi::Env env, Napi::Object &exports) {
    LLVMContext::Init(env, exports);
    Module::Init(env, exports);
    Type::Init(env, exports);
    IntegerType::Init(env, exports);
    PointerType::Init(env, exports);
    FunctionType::Init(env, exports);
    StructType::Init(env, exports);
    ArrayType::Init(env, exports);
    Value::Init(env, exports);
    User::Init(env, exports);
    Constant::Init(env, exports);
    ConstantInt::Init(env, exports);
    ConstantFP::Init(env, exports);
    GlobalValue::Init(env, exports);
    GlobalObject::Init(env, exports);
    GlobalVariable::Init(env, exports);
    Function::Init(env, exports);
    Argument::Init(env, exports);
    BasicBlock::Init(env, exports);
    IRBuilder::Init(env, exports);
    InitVerifier(env, exports);
}