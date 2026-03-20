/*
 * Program: n42.bin
 * Function: FUN_00125b78
 * Entry: 00125b78
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00125b78(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined auStack_18 [4];
  undefined4 *local_14;
  
  local_14 = param_1;
  uVar1 = FUN_001aa4e8(param_2,auStack_18);
  if (uVar1 != 0) {
    if ((uVar1 & 0x20) != 0) {
      return *local_14;
    }
    *(byte *)((int)local_14 + 1) = *(byte *)((int)local_14 + 1) & 0xfd | 2;
    *(byte *)local_14 = *(byte *)local_14 & 0xdf | 0x20;
    bVar2 = *(byte *)local_14 & 0xf;
    if ((bVar2 == 1) && ((uVar1 & 1) != 0)) {
      return *local_14;
    }
    if ((bVar2 == 2) && ((uVar1 & 2) != 0)) {
      return *local_14;
    }
    if ((bVar2 == 4) && ((uVar1 & 4) != 0)) {
      return *local_14;
    }
    if ((bVar2 == 8) && ((uVar1 & 8) != 0)) {
      return *local_14;
    }
  }
  *(byte *)((int)local_14 + 1) = *(byte *)((int)local_14 + 1) & 0xfe;
  *(byte *)local_14 = *(byte *)local_14 & 0xf0;
  *(byte *)((int)local_14 + 1) = *(byte *)((int)local_14 + 1) & 0xfd | 2;
  *(byte *)local_14 = *(byte *)local_14 & 0xdf | 0x20;
  return *local_14;
}

