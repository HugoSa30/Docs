/*
 * Program: n42.bin
 * Function: 42
 * Entry: 00109dd8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00109e70) */

undefined4 _2(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 * 4 + 0xf09940);
  uVar1 = 1;
  *puVar3 = 0;
  *puVar3 = *puVar3 | 0x4000;
  *puVar3 = *puVar3 | 0x1000;
  do {
  } while ((*puVar3 & 0x100) == 0);
  uVar2 = 0;
  while( true ) {
    puVar3[uVar2 * 8 + 0x43] = 0x5555;
    if (puVar3[uVar2 * 8 + 0x43] != 0x5555) {
      uVar1 = 0;
      goto LAB_00109ed8;
    }
    puVar3[uVar2 * 8 + 0x43] = 0xaaaa;
    if (puVar3[uVar2 * 8 + 0x43] != 0xaaaa) break;
    puVar3[uVar2 * 8 + 0x40] = 0;
    uVar2 = uVar2 + 1 & 0xff;
    if (0xf < uVar2) {
LAB_00109ed8:
      *puVar3 = *puVar3 & 0xefff;
      *puVar3 = *puVar3 & 0xbfff;
      return uVar1;
    }
  }
  uVar1 = 0;
  goto LAB_00109ed8;
}

