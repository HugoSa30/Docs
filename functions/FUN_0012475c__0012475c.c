/*
 * Program: n42.bin
 * Function: FUN_0012475c
 * Entry: 0012475c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0012475c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_5 = 0;
  iVar2 = func_0xff209390();
  if (iVar2 == 0x100) {
    if ((((DAT_003fb2c0 & 0xef) == 0) || (0x1bffff < param_1)) || (param_1 < 0x1e0001)) {
      if ((DAT_003fb2c0 & 0x10) == 0x10) {
        puVar1 = _DAT_003fbcb8 + 1;
        *_DAT_003fbcb8 = _DAT_002fc014;
        _DAT_003fbcb8 = puVar1;
        _DAT_002fc014 = 0;
        (*(code *)&SUB_00fac64c)(1);
        FUN_00122818(param_1);
        FUN_00122828(param_3,param_4,0x22);
        (*(code *)&SUB_00fac64c)(0);
        _DAT_002fc014 = _DAT_003fbcb8[-1];
        _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      }
      else {
        FUN_00122818(param_1);
        FUN_00122828(param_3,param_4,0x22);
      }
    }
    else {
      *param_5 = 0x32;
    }
  }
  return 0;
}

