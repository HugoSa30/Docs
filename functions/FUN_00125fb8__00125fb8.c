/*
 * Program: n42.bin
 * Function: FUN_00125fb8
 * Entry: 00125fb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00125fb8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  B_genactiv = 0;
  if (param_2 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x00125fe0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2 * 4 + 0xf25fec))();
    return uVar1;
  }
  DAT_005bb850 = DAT_005bb850 + 1;
  if (DAT_005bb7b2 == -1) {
    DAT_005bb7b4 = 0;
  }
  else {
    DAT_005bb7b4 = 6;
    (*(code *)&SUB_00fb24e0)((int)DAT_005bb7b2);
  }
  return 1;
}

