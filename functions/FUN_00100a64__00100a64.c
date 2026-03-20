/*
 * Program: n42.bin
 * Function: FUN_00100a64
 * Entry: 00100a64
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00100a64(int param_1,uint param_2,int param_3,undefined param_4)

{
  short sVar1;
  undefined auStack_20 [4];
  int local_1c;
  undefined2 local_18;
  int local_14;
  int local_10;
  undefined local_c;
  
  local_10 = param_1 + param_2 + -1;
  local_14 = param_1;
  local_c = param_4;
  sVar1 = _(&local_14,auStack_20);
  if (param_2 != 0) {
    do {
      if (sVar1 != 0) break;
      _();
      local_1c = param_3;
      if (param_2 < 0x40) {
        local_18 = (undefined2)param_2;
        sVar1 = _(&local_1c,auStack_20);
        param_2 = 0;
      }
      else {
        local_18 = 0x40;
        sVar1 = _(&local_1c,auStack_20);
        param_3 = param_3 + 0x40;
        param_2 = param_2 - 0x40;
      }
    } while (param_2 != 0);
  }
  _(auStack_20);
  return;
}

