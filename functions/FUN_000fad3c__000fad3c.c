/*
 * Program: n42.bin
 * Function: FUN_000fad3c
 * Entry: 000fad3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fad3c(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint in_MSR;
  int in_TBLr;
  
  do {
    _DAT_003fbd10 = _DAT_003fbd10 + (int)_DAT_003fbd08[1];
    pcVar2 = *_DAT_003fbd08;
    _DAT_003fbd08 = _DAT_003fbd08 + 2;
    (*pcVar2)(param_1);
    param_1 = in_MSR;
    _DAT_002fc200 = _DAT_002fc200 & 0xff0f | 0x88;
    _DAT_002fc204 = _DAT_003fbd10;
    uVar1 = param_1 >> 0xe & 1;
    in_MSR = param_1 & 0x9030 |
             param_1 & 0xffff6fcf | (param_1 >> 0xf & 1 | uVar1) << 0xf |
             (param_1 >> 5 & 1 | uVar1) << 5 | (param_1 >> 4 & 1 | uVar1) << 4;
  } while ((int)_DAT_003fbd10 - in_TBLr < 1);
  return;
}

