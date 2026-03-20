/*
 * Program: n42.bin
 * Function: FUN_0009c354
 * Entry: 0009c354
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009c354(int param_1,int param_2,undefined *param_3)

{
  uint uVar1;
  
  param_1 = param_1 * 3;
  param_3[1] = (byte)(*(uint *)(&DAT_003fa3ec + (uint)(byte)(&DAT_00016acd)[param_1] * 4) >>
                     ((byte)(&DAT_00016ace)[param_1] & 0x3f)) & 1;
  uVar1 = *(uint *)(&DAT_003fa418 + (uint)(byte)(&DAT_00016acd)[param_1] * 4) >>
          ((byte)(&DAT_00016ace)[param_1] & 0x3f) & 1;
  *param_3 = (char)uVar1;
  if (param_2 != 0) {
    *param_3 = uVar1 == 0;
  }
  return 0;
}

