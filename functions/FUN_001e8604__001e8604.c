/*
 * Program: n42.bin
 * Function: FUN_001e8604
 * Entry: 001e8604
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x001e86a8) */

uint * FUN_001e8604(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar2 = param_1;
  if (param_2 < param_1) {
    puVar2 = param_2;
    param_2 = param_1;
  }
  uVar3 = 0;
  do {
    uVar5 = *(uint *)(uVar3 * 4 + 0xfe8c4c);
    for (puVar4 = puVar2; puVar4 <= param_2; puVar4 = puVar4 + 1) {
      *puVar4 = uVar5;
    }
    for (puVar4 = puVar2; puVar1 = param_2, puVar4 <= param_2; puVar4 = puVar4 + 1) {
      if (*puVar4 != uVar5) {
        return puVar4;
      }
      *puVar4 = ~uVar5;
    }
    for (; puVar2 <= puVar1; puVar1 = puVar1 + -1) {
      if (*puVar1 != ~uVar5) {
        return puVar1;
      }
      *puVar1 = uVar5;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  return (uint *)0x0;
}

