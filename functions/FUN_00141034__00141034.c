/*
 * Program: n42.bin
 * Function: FUN_00141034
 * Entry: 00141034
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00141034(void)

{
  char *unaff_r27;
  uint unaff_r29;
  float *unaff_r31;
  double in_f13;
  undefined4 param_11;
  uint uStack00000024;
  
  *unaff_r31 = (float)in_f13;
  _DAT_003fb4a4 =
       (float)((double)CONCAT44(0x43300000,(int)*unaff_r27 ^ 0x80000000) - (double)_DAT_0001cc48);
  _DAT_003fb494 =
       (float)(((double)CONCAT44(0x43300000,(uint)tans) - (double)_DAT_0001cc4c) *
               (double)_DAT_0001cc58 * (double)_DAT_0001cc5c - (double)_DAT_0001cc60);
  param_11 = 0x43300000;
  uStack00000024 = unaff_r29 & 0xff;
  DAT_005b8abc = (float)(((double)CONCAT44(0x43300000,uStack00000024) - (double)_DAT_0001cc4c) *
                         (double)_DAT_0001cc64 * (double)_DAT_0001cc5c);
  func_0xff218740((double)DAT_005b8abc,&DAT_001cadcc);
  return;
}

