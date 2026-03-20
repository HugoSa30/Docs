/*
 * Program: n42.bin
 * Function: FUN_00121f1c
 * Entry: 00121f1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00121f1c(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_MSR;
  
  if (DAT_003fb2c1 != '\0') {
    if (DAT_003fb2c1 == '\x02') {
      puVar2 = _DAT_003fbcb8 + 1;
      *_DAT_003fbcb8 = _DAT_002fc014;
      _DAT_003fbcb8 = puVar2;
      _DAT_002fc014 = 0;
      uVar1 = in_MSR >> 0xe & 1;
      param_1 = in_MSR & 0x9030 |
                in_MSR & 0xffff6fcf | (in_MSR >> 0xf & 1 | uVar1) << 0xf |
                (in_MSR >> 5 & 1 | uVar1) << 5 | (in_MSR >> 4 & 1 | uVar1) << 4;
      (*(code *)&SUB_00fac64c)(1);
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      DAT_003fb2c0 = DAT_003fb2c0 & 0xef;
      DAT_003fb2c1 = '\0';
    }
    else {
      DAT_003fb2c0 = DAT_003fb2c0 | 0x10;
      puVar2 = _DAT_003fbcb8 + 1;
      *_DAT_003fbcb8 = _DAT_002fc014;
      _DAT_003fbcb8 = puVar2;
      _DAT_002fc014 = 0;
      uVar1 = in_MSR >> 0xe & 1;
      param_1 = in_MSR & 0x9030 |
                in_MSR & 0xffff6fcf | (in_MSR >> 0xf & 1 | uVar1) << 0xf |
                (in_MSR >> 5 & 1 | uVar1) << 5 | (in_MSR >> 4 & 1 | uVar1) << 4;
      (*(code *)&SUB_00fac64c)(0);
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      DAT_003fb2c1 = '\0';
    }
  }
  return param_1;
}

