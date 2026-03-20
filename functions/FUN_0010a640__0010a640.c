/*
 * Program: n42.bin
 * Function: FUN_0010a640
 * Entry: 0010a640
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a640(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar3 = *(ushort *)(param_1 + 0x24) &
          (*(ushort *)(&UNK_003faf4e + param_2 * 6) | *(ushort *)(&UNK_003faf50 + param_2 * 6));
  uVar7 = (uint)uVar3;
  while (uVar7 != 0) {
    uVar4 = 0x1f - LZCOUNT(uVar7);
    uVar7 = uVar7 & ~(1 << (uVar4 & 0x3f));
    iVar5 = (uVar4 + param_2 * 0x10) * 2;
    bVar1 = (&UNK_003fae84)[iVar5];
    if ((&UNK_003fae85)[iVar5] == '\x02') {
      iVar5 = _DAT_003faf14 + ((uint)bVar1 - (uint)DAT_00f03658 & 0xffff) * 0x14;
      if ((*(char *)(iVar5 + 1) == '\0') || ((*(byte *)(iVar5 + 0xf) & 1) == 1)) {
        if ((*(byte *)(iVar5 + 0xf) & 1) != 0) {
          puVar8 = (ushort *)(param_1 + uVar4 * 0x10 + 0x80);
          *puVar8 = *puVar8 & 0xff0f;
          *puVar8 = *puVar8 | 0x80;
        }
        if (*(code **)(iVar5 + 4) != (code *)0x0) {
          (**(code **)(iVar5 + 4))(bVar1);
        }
      }
      else {
        uVar2 = *(uint *)(param_1 + (uVar4 * 0x10 & 0xff0) + 0x82) >> 0x15;
        for (puVar6 = (undefined *)
                      (_DAT_003faf18 +
                      (uint)*(byte *)(_DAT_003faf1c + uVar4 + param_2 * 2 + -0xe) * 0x14);
            (uVar2 < *(uint *)(puVar6 + 4) || (*(uint *)(puVar6 + 8) < uVar2));
            puVar6 = puVar6 + 0x14) {
        }
        if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
          (**(code **)(puVar6 + 0x10))(*puVar6);
        }
      }
    }
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & ~uVar3;
  return;
}

