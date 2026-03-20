/*
 * Program: n42.bin
 * Function: FUN_00090a9c
 * Entry: 00090a9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090a9c(undefined *param_1)

{
  char cVar1;
  undefined uVar3;
  undefined4 uVar2;
  
  if (DAT_003f9f26 == '\x01') {
    cVar1 = (**(code **)(param_1 + 0xc))();
    if (cVar1 == '\0') {
      *_DAT_003f9f1c = *_DAT_003f9f18;
      uVar2 = 10;
      goto LAB_00090b28;
    }
    if (cVar1 == '\x01') {
      uVar3 = param_1[4];
    }
    else if (cVar1 == '\x03') {
      uVar3 = param_1[5];
    }
    else {
      uVar3 = param_1[6];
    }
  }
  else {
    uVar3 = *param_1;
  }
  *_DAT_003f9f20 = uVar3;
  uVar2 = 0x14;
LAB_00090b28:
  FUN_00095b8c(uVar2,1);
  return;
}

