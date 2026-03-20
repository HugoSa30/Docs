/*
 * Program: n42.bin
 * Function: FUN_0009b900
 * Entry: 0009b900
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009b900(int param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  undefined uVar2;
  int iVar3;
  uint local_18 [2];
  
  iVar3 = (uint)(byte)(&DAT_00016acd)[param_1 * 3] * 0x14;
  (**(code **)(iVar3 + 0x16ba0))
            (*(undefined4 *)(iVar3 + 0x16b98),
             *(undefined4 *)(&DAT_003fa3c0 + (uint)(byte)(&DAT_00016acd)[param_1 * 3] * 4),local_18)
  ;
  uVar1 = local_18[0] >> ((byte)(&DAT_00016ace)[param_1 * 3] & 0x3f) & 1;
  uVar2 = (undefined)uVar1;
  param_3[1] = uVar2;
  if (param_2 == 0) {
    *param_3 = uVar2;
  }
  else {
    *param_3 = uVar1 == 0;
  }
  return 0;
}

