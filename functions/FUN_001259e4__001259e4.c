/*
 * Program: n42.bin
 * Function: FUN_001259e4
 * Entry: 001259e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001259e4(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined auStack_10 [4];
  undefined4 *local_c;
  
  local_c = param_1;
  uVar1 = FUN_001aa4e8(param_3,auStack_10);
  if (uVar1 != 0) {
    if ((uVar1 & 0x20) != 0) {
      return *local_c;
    }
    if (((param_2 & 1) == 0) || ((uVar1 & 1) == 0)) {
      if (((param_2 & 2) == 0) || ((uVar1 & 2) == 0)) {
        if (((param_2 & 4) == 0) || ((uVar1 & 4) == 0)) {
          if (((param_2 & 8) != 0) && ((uVar1 & 8) != 0)) {
            *(byte *)((int)local_c + 1) = *(byte *)((int)local_c + 1) & 0xfe | 1;
            *(byte *)local_c = *(byte *)local_c & 0xf0 | 8;
          }
        }
        else {
          *(byte *)((int)local_c + 1) = *(byte *)((int)local_c + 1) & 0xfe | 1;
          *(byte *)local_c = *(byte *)local_c & 0xf0 | 4;
        }
      }
      else {
        *(byte *)((int)local_c + 1) = *(byte *)((int)local_c + 1) & 0xfe | 1;
        *(byte *)local_c = *(byte *)local_c & 0xf0 | 2;
      }
    }
    else {
      *(byte *)((int)local_c + 1) = *(byte *)((int)local_c + 1) & 0xfe | 1;
      *(byte *)local_c = *(byte *)local_c & 0xf0 | 1;
    }
  }
  *(byte *)((int)local_c + 1) = *(byte *)((int)local_c + 1) & 0xfd | 2;
  *(byte *)local_c = *(byte *)local_c & 0xdf | 0x20;
  return *local_c;
}

