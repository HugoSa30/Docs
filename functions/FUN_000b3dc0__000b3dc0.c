/*
 * Program: n42.bin
 * Function: FUN_000b3dc0
 * Entry: 000b3dc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b3dc0(undefined4 param_1,int param_2,byte param_3)

{
  uint uVar1;
  
  if (((param_2 == 1) && (sync_level = param_3, synstate == 0)) && ((B_tprel & B_bm) == 0)) {
    uVar1 = (*(code *)&SUB_00064b20)();
    uVar1 = (uVar1 & 0xffff) % 0x708;
    if ((0x28 < uVar1) && (uVar1 < (uint)FSYNDEL * 0x708 >> 8)) {
      B_tprel = B_tprel | B_zsynchro;
      FUN_000cb1e4();
    }
  }
  return;
}

