/*
 * Program: n42.bin
 * Function: FUN_0009c1e0
 * Entry: 0009c1e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0009c230) */
/* WARNING: Removing unreachable block (ram,0x0009c2a4) */

void FUN_0009c1e0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar7 = (undefined4 *)&UNK_003f9a2c;
  puVar8 = (undefined4 *)0xfb397c;
  iVar9 = 0x5f;
  do {
    puVar7[1] = puVar8[1];
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
    *puVar7 = *puVar8;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  puVar7 = (undefined4 *)&UNK_005bb77c;
  puVar8 = (undefined4 *)0xfb3c74;
  iVar9 = 0x52;
  do {
    puVar7[1] = puVar8[1];
    puVar8 = puVar8 + 2;
    puVar7 = puVar7 + 2;
    *puVar7 = *puVar8;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uVar1 = (uint)DAT_00016c72;
  if (uVar1 != 0) {
    puVar8 = (undefined4 *)&DAT_003fa3bc;
    puVar7 = (undefined4 *)&DAT_003fa3e8;
    puVar6 = (undefined4 *)&UNK_003fa414;
    puVar5 = (undefined4 *)&UNK_003fa440;
    puVar4 = (undefined4 *)&UNK_003fa46c;
    puVar3 = (undefined4 *)&UNK_003fa498;
    puVar2 = (undefined4 *)&UNK_003fa4c4;
    do {
      puVar8 = puVar8 + 1;
      *puVar8 = 0;
      puVar7 = puVar7 + 1;
      *puVar7 = 0;
      puVar6 = puVar6 + 1;
      *puVar6 = 0;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

