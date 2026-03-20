/*
 * Program: n42.bin
 * Function: FUN_00110d74
 * Entry: 00110d74
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00110d74(void)

{
  uint uVar1;
  undefined4 extraout_r4;
  uint uVar2;
  
  uVar2 = _DAT_003041ac + _DAT_003045ac;
  uVar1 = (*(code *)&SUB_00faf148)();
  func_0xff21fd5c((int)((ulonglong)uVar2 * (ulonglong)(uVar1 & 0xffff) >> 0x20),
                  uVar2 * (uVar1 & 0xffff),0,10000);
  return extraout_r4;
}

