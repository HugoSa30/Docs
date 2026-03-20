/*
 * Program: n42.bin
 * Function: FUN_001a19ac
 * Entry: 001a19ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001a19ac(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_MSR;
  
  uVar4 = 0;
  _DAT_003fb9bc = _DAT_002fc014;
  uVar1 = in_MSR >> 0xe & 1;
  uVar2 = (uint)DAT_00fa9c80;
  do {
    iVar3 = uVar4 * 0xc;
    (&DAT_003fbc24)[iVar3] = 0;
    (&DAT_003fbc28)[iVar3] = 0xff;
    (&DAT_003fbc29)[iVar3] = 0xff;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < uVar2);
  _DAT_002fc014 = _DAT_003fb9bc;
  return in_MSR & 0x9030 |
         in_MSR & 0xffff6fcf | (in_MSR >> 0xf & 1 | uVar1) << 0xf | (in_MSR >> 5 & 1 | uVar1) << 5 |
         (in_MSR >> 4 & 1 | uVar1) << 4;
}

