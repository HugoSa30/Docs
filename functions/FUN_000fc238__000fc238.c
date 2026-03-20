/*
 * Program: n42.bin
 * Function: FUN_000fc238
 * Entry: 000fc238
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fc238(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int in_TBLr;
  
  piVar4 = *(int **)(_DAT_003fbcc8 + 4);
  if (piVar4 == (int *)0x0) {
    FUN_000fba18(0xd,0);
    uVar2 = 0xd;
  }
  else if ((_DAT_002fc200 & 8) == 0) {
    puVar1 = _DAT_003fbcb8 + 1;
    *_DAT_003fbcb8 = _DAT_002fc014;
    _DAT_003fbcb8 = puVar1;
    _DAT_003fbd08 = piVar4[1];
    _DAT_003fbd0c = piVar4[2];
    uVar3 = param_1 + *piVar4;
    _DAT_003fbd10 = in_TBLr + param_1 + *piVar4;
    if (0x7fffffff < uVar3) {
      uVar3 = 0;
    }
    _DAT_002fc200 = _DAT_002fc200 & 0xff0f | 0x88;
    _DAT_002fc204 = in_TBLr + uVar3;
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
    if (param_2 != (int *)0x0) {
      *param_2 = in_TBLr + param_1;
    }
    uVar2 = 0;
  }
  else {
    FUN_000fba18(0xe,0);
    uVar2 = 0xe;
  }
  return uVar2;
}

