/*
 * Program: n42.bin
 * Function: FUN_0010a180
 * Entry: 0010a180
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_0010a180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = _DAT_003faf14 + (param_1 - (uint)DAT_00f03658 & 0xff) * 0x14;
  if (*(char *)(iVar2 + 1) == '\0') {
    uVar1 = FUN_001a448c(*(undefined *)(iVar2 + 0xd),*(undefined *)(iVar2 + 0xe),param_2,param_3,
                         param_4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

