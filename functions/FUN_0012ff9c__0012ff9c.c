/*
 * Program: n42.bin
 * Function: FUN_0012ff9c
 * Entry: 0012ff9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0012ff9c(void)

{
  char cVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  
  cVar1 = B_pwf;
  iVar7 = 0;
  puVar6 = &UNK_005b8983;
  pbVar5 = &DAT_005b898b;
  puVar4 = &DAT_005b8987;
  pbVar3 = &DAT_005b898f;
  puVar2 = &UNK_003fb10b;
  do {
    if (cVar1 != '\0') {
      (&DAT_003fb110)[iVar7] = 0;
    }
    uVar8 = (uint)KRFHKS * 2;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    puVar6 = puVar6 + 1;
    *puVar6 = (char)uVar8;
    pbVar5 = pbVar5 + 1;
    *pbVar5 = KRFHKS;
    puVar4 = puVar4 + 1;
    *puVar4 = (char)uVar8;
    pbVar3 = pbVar3 + 1;
    *pbVar3 = KRFHKS;
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  return;
}

