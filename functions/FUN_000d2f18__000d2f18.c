/*
 * Program: n42.bin
 * Function: FUN_000d2f18
 * Entry: 000d2f18
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d2f18(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  
  sVar3 = 0;
  bVar1 = **(byte **)(param_1 + 0x24);
  if ((bVar1 & 0x20) != 0) {
    iVar5 = (uint)*(ushort *)(&DAT_005b8bb8 + (uint)*(byte *)(param_1 + 0x74) * 2) -
            ((uint)**(ushort **)(param_1 + 4) +
            ((int)*(char *)(*(int *)(param_1 + 0xc) + (uint)**(byte **)(param_1 + 0x14)) >> 1));
    if ((bVar1 & 1) != 0) {
      if ((bVar1 & 0x40) != 0) {
        **(byte **)(param_1 + 0x24) = bVar1 & 0xef;
      }
      if ((10 < iVar5) || (iVar5 < -10)) {
        **(short **)(param_1 + 4) = **(short **)(param_1 + 4) + (short)(iVar5 >> 2);
      }
      if (iVar5 < 1) {
        sVar2 = **(short **)(param_1 + 4);
        if (sVar2 != 0) {
          **(short **)(param_1 + 4) = sVar2 + -1;
          if (-100 < *(char *)(*(int *)(param_1 + 0xc) + (uint)**(byte **)(param_1 + 0x14))) {
            pcVar6 = (char *)(*(int *)(param_1 + 0xc) + (uint)**(byte **)(param_1 + 0x14));
            *pcVar6 = *pcVar6 + -1;
          }
        }
      }
      else {
        **(short **)(param_1 + 4) = **(short **)(param_1 + 4) + 1;
        if (*(char *)(*(int *)(param_1 + 0xc) + (uint)**(byte **)(param_1 + 0x14)) < 'd') {
          pcVar6 = (char *)(*(int *)(param_1 + 0xc) + (uint)**(byte **)(param_1 + 0x14));
          *pcVar6 = *pcVar6 + '\x01';
        }
      }
      uVar7 = 0;
      do {
        sVar3 = sVar3 + *(char *)(*(int *)(param_1 + 0xc) + uVar7);
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar7 < 4);
      **(short **)(param_1 + 4) = **(short **)(param_1 + 4) + (sVar3 >> 3);
    }
    bVar1 = *(byte *)(param_1 + 0x74);
    if ((bVar1 & 1) == 0) {
      uVar4 = FUN_000b54d0(iVar5 + (uint)*(ushort *)(&SPRZG_AN + (uint)bVar1 * 2));
    }
    else {
      uVar4 = FUN_000b54d0((uint)*(ushort *)(&SPRZG_AN + (uint)bVar1 * 2) - iVar5);
    }
    iVar5 = (uint)*(byte *)(param_1 + 0x74) * 2;
    if (*(ushort *)(&SPRZG_AN + iVar5) < uVar4) {
      **(undefined2 **)(param_1 + 0x2c) = *(undefined2 *)(&SPRZG_AN + iVar5);
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 4;
    }
    else {
      **(ushort **)(param_1 + 0x2c) = uVar4;
      **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xfb;
    }
  }
  if ((**(byte **)(param_1 + 0x24) & 2) != 0) {
    **(undefined2 **)(param_1 + 0x2c) =
         *(undefined2 *)(&SPRZG_AN + (uint)*(byte *)(param_1 + 0x74) * 2);
  }
  return;
}

