/*
 * Program: n42.bin
 * Function: FUN_001e7724
 * Entry: 001e7724
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001e7724(byte param_1,byte *param_2,int param_3)

{
  uint uVar1;
  
  if (((param_3 != 0) && (*param_2 < DAT_00fe16e2)) || (*param_2 = 0, DAT_00fe16e2 != 0)) {
    do {
      if (*(byte *)((uint)*param_2 * 0xf + 0xfe16e4) == (param_1 | 0x80)) {
        return 1;
      }
      uVar1 = *param_2 + 1;
      *param_2 = (byte)uVar1;
    } while ((uVar1 & 0xff) < (uint)DAT_00fe16e2);
  }
  return 0;
}

