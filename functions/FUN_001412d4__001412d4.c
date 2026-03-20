/*
 * Program: n42.bin
 * Function: FUN_001412d4
 * Entry: 001412d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001412d4(void)

{
  uint unaff_r22;
  uint unaff_r23;
  char unaff_r30;
  undefined4 unaff_r31;
  double dVar1;
  double dVar2;
  undefined4 in_stack_00000020;
  uint param_11;
  uint uStack0000002c;
  
  dVar2 = (double)_DAT_0001cc48;
  _DAT_003fb418 =
       (float)((double)CONCAT44(in_stack_00000020,(int)(short)unaff_r30 - unaff_r22 ^ unaff_r23) -
              dVar2);
  param_11 = (int)unaff_r30 ^ unaff_r23;
  _DAT_003fb4a4 = (float)((double)CONCAT44(unaff_r31,param_11) - dVar2);
  if (tabst_w < 2) {
    dVar1 = (double)CONCAT44(unaff_r31,1);
  }
  else {
    param_11 = (uint)tabst_w;
    dVar1 = (double)CONCAT44(unaff_r31,param_11);
  }
  _DAT_003fb490 = (float)(dVar1 - (double)_DAT_0001cc4c);
  _DAT_003fb414 = _DAT_003fb418 / _DAT_003fb490;
  _DAT_003fb424 = _DAT_003fb414 / _DAT_001caf6c;
  uStack0000002c = unaff_r22 ^ unaff_r23;
  _DAT_003fb41c = (float)((double)CONCAT44(unaff_r31,uStack0000002c) - dVar2);
  _DAT_003fb420 = _DAT_003fb424 - _DAT_003fb41c;
  _DAT_003fb428 = _DAT_003fddd0 + _DAT_003fb420;
  func_0xff218740((double)_DAT_003fb490,&DAT_001cae00);
  return;
}

