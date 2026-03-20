/*
 * Program: n42.bin
 * Function: FUN_000f17e8
 * Entry: 000f17e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint * FUN_000f17e8(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  uVar4 = 0;
  puVar3 = param_1;
  if (param_2 < param_1) {
    puVar3 = param_2;
    param_2 = param_1;
  }
  do {
    uVar5 = *(uint *)(&DAT_001ce72c + uVar4 * 4);
    for (puVar6 = puVar3; puVar1 = puVar3, puVar6 <= param_2; puVar6 = puVar6 + 1) {
      uVar2 = uVar5;
      if ((((uint)puVar6 & 4) != 0) && (uVar4 == 0)) {
        uVar2 = ~uVar5;
      }
      *puVar6 = uVar2;
    }
    while (puVar6 = puVar3, puVar1 <= param_2) {
      uVar2 = uVar5;
      if ((((uint)puVar1 & 4) != 0) && (uVar4 == 0)) {
        uVar2 = ~uVar5;
      }
      if (*puVar1 != uVar2) {
        return puVar1;
      }
      *puVar1 = ~uVar2;
      instructionSynchronize();
      puVar1 = puVar1 + 1;
    }
    while (puVar1 = param_2, puVar6 <= param_2) {
      uVar2 = uVar5;
      if ((((uint)puVar6 & 4) != 0) && (uVar4 == 0)) {
        uVar2 = ~uVar5;
      }
      if (*puVar6 != ~uVar2) {
        return puVar6;
      }
      *puVar6 = uVar2;
      instructionSynchronize();
      puVar6 = puVar6 + 1;
    }
    while (puVar6 = param_2, puVar3 <= puVar1) {
      uVar2 = uVar5;
      if ((((uint)puVar1 & 4) != 0) && (uVar4 == 0)) {
        uVar2 = ~uVar5;
      }
      if (*puVar1 != uVar2) {
        return puVar1;
      }
      *puVar1 = ~uVar2;
      instructionSynchronize();
      puVar1 = puVar1 + -1;
    }
    while (puVar1 = param_2, puVar3 <= puVar6) {
      uVar2 = uVar5;
      if ((((uint)puVar6 & 4) != 0) && (uVar4 == 0)) {
        uVar2 = ~uVar5;
      }
      if (*puVar6 != ~uVar2) {
        return puVar6;
      }
      *puVar6 = uVar2;
      instructionSynchronize();
      puVar6 = puVar6 + -1;
    }
    while (puVar3 <= puVar1) {
      uVar2 = uVar5;
      if ((((uint)puVar1 & 4) != 0) && (uVar4 == 0)) {
        uVar2 = ~uVar5;
      }
      if (*puVar1 != uVar2) {
        return puVar1;
      }
      instructionSynchronize();
      puVar1 = puVar1 + -1;
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (1 < uVar4) {
      return (uint *)0x0;
    }
  } while( true );
}

