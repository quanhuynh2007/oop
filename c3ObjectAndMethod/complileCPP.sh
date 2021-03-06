#!/bin/bash
g++ fraction.cpp; ./a.out;
g++ problemWhenNotSetupConstructorCopy.cpp; ./a.out
g++ problemWhenNotSetupConstructorCopyFix.cpp; ./a.out
g++ methodConstructorCallMethodVirtual.cpp; ./a.out
g++ destructorMethod.cpp; ./a.out
g++ operatorOverloading.cpp ; ./a.out
g++ mainFractionOperator.cpp fractionOperator.cpp; ./a.out
g++ examplePassByValue.cpp; ./a.out
g++ examplePassByReference.cpp; ./a.out
g++ pointerPassByValueAndReference.cpp; ./a.out
g++ exampleMultiParamNotKnowInMethod.cpp; ./a.out
g++ castingMethodExample.cpp; ./a.out
g++ methodCreateUsingCast.cpp; ./a.out
g++ methodOperatorUsingCast.cpp; ./a.out
g++ staticDataMember.cpp; ./a.out
g++ staticDataMemberClassObject.cpp; ./a.out
g++ listConstructorforClassObject.cpp; ./a.out
g++ methodConstOfClassObject.cpp; ./a.out
