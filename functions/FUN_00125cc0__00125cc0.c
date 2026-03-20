/*
 * Program: n42.bin
 * Function: FUN_00125cc0
 * Entry: 00125cc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00125cc0(byte *param_1,undefined4 *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 local_28;
  undefined auStack_26 [2];
  undefined4 *local_24;
  
  local_24 = param_2;
  if ((*(byte *)((int)param_2 + 1) & 1) == 0) {
    bVar3 = *param_1;
    bVar2 = param_1[1];
    if (bVar3 == 0) {
      bVar3 = FUN_001aa4e8(param_3 & 0xff,auStack_26);
      if (bVar3 == 0) {
        *(byte *)((int)local_24 + 1) = *(byte *)((int)local_24 + 1) & 0xfd | 2;
        *(byte *)local_24 = *(byte *)local_24 & 0xdf | 0x20;
      }
      bVar2 = 0;
    }
    else if ((int)param_4 < (int)(uint)bVar2) {
      local_28 = *(undefined2 *)param_2;
      uVar1 = FUN_001259e4(&local_28,bVar3);
      *param_2 = uVar1;
      bVar3 = 0;
    }
    else {
      if ((((param_4 == bVar2) && ((bVar3 & 8) == 0)) && ((bVar3 & 0x10) == 0)) &&
         ((param_5 & 0x80) == 0)) {
        FUN_001aa884(param_3);
      }
      bVar2 = bVar2 + 1;
    }
    *param_1 = bVar3;
    param_1[1] = bVar2;
  }
  else {
    bVar3 = param_1[2];
    if ((int)param_5 < (int)(uint)bVar3) {
      bVar3 = 0;
      local_28 = *(undefined2 *)param_2;
      uVar1 = FUN_00125b78(&local_28,param_3);
      *param_2 = uVar1;
    }
    else {
      if (((param_5 == bVar3) && ((*(byte *)param_2 & 0xf) != 8)) && ((param_5 & 0x80) == 0)) {
        FUN_001aa884(param_3);
      }
      bVar3 = bVar3 + 1;
    }
    param_1[2] = bVar3;
  }
  return *local_24;
}

