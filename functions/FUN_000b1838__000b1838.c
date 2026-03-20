/*
 * Program: n42.bin
 * Function: FUN_000b1838
 * Entry: 000b1838
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b1838(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) * (param_2 & 0xffff);
  return (int)((ulonglong)(param_3 & 0xffff) * (ulonglong)uVar1 >> 0x20) << 0x10 |
         (param_3 & 0xffff) * uVar1 >> 0x10;
}

