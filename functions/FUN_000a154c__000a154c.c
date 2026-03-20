/*
 * Program: n42.bin
 * Function: FUN_000a154c
 * Entry: 000a154c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a154c(void)

{
  byte bVar1;
  ushort *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (DAT_003fa18b == '\x10') {
    _DAT_003fa1ce = 0xffff;
  }
  else if (DAT_003fa18b != '\x11') {
    if (DAT_003fa18b != '\x12') {
      if (DAT_003fa18b != '\x13') {
        return;
      }
      DAT_003fa18a = DAT_003fa18a & 0xfe | 4;
      DAT_003fa18b = 0x20;
      _DAT_003fe730 = 0xa66a;
      return;
    }
    cVar4 = FUN_0009f980(_DAT_003fa1ce & 0xff,_DAT_00016cf0);
    if (cVar4 == '\0') {
      return;
    }
    if (cVar4 != '\x01') {
      if (cVar4 != -0x80) {
        DAT_003fa18a = DAT_003fa18a | 0x40;
        DAT_003fa18b = 0x11;
        return;
      }
      DAT_003fa18a = DAT_003fa18a | 0x40;
      DAT_003fa18b = 0x11;
      return;
    }
    uVar9 = (uint)(short)_DAT_003fa1ce;
    (&DAT_003fe734)[uVar9] = (&DAT_003fe734)[uVar9] | 0x10;
    FUN_0009ef68(uVar9 & 0xff,_DAT_00016ce8 + (uint)*(ushort *)(uVar9 * 10 + 0x16c78));
    DAT_003fa18b = 0x11;
    return;
  }
  uVar9 = (uint)(short)_DAT_003fa1ce;
  puVar2 = (ushort *)(&DAT_00016c7e + uVar9 * 10);
  do {
    uVar9 = uVar9 + 1;
    puVar2 = puVar2 + 5;
    _DAT_003fa1ce = (ushort)uVar9;
    if ((*puVar2 >> 8 & 1) != 0) {
      if ((int)(uint)DAT_00016cf4 <= (int)(short)_DAT_003fa1ce) {
        DAT_003fa18b = 0x13;
        return;
      }
      DAT_003fa18b = 0x12;
      puVar8 = (undefined4 *)&DAT_00016cf0;
      iVar3 = (short)_DAT_003fa1ce * 10;
      uVar9 = uVar9 & 0xff;
      bVar1 = *(byte *)(uVar9 * 10 + 0x16c80);
      uVar5 = (ushort)bVar1;
      if (bVar1 != 0) {
        puVar7 = (undefined *)(_DAT_00016ce8 + (uint)*(ushort *)(iVar3 + 0x16c78) + -1);
        puVar6 = (undefined *)(_DAT_00016cf0 + -1);
        do {
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar7;
          uVar5 = uVar5 - 1;
        } while (0 < (short)uVar5);
      }
      if ((*(ushort *)(&DAT_00016c7e + iVar3) >> 5 & 1) == 0) {
        FUN_0009ee2c(uVar9,_DAT_00016cf0);
      }
      else {
        cVar4 = FUN_0009edb4(uVar9,_DAT_00016cf0);
        if (cVar4 == '\0') {
          DAT_003fa18a = DAT_003fa18a | 0x40;
          DAT_003fa18b = 0x11;
        }
      }
      FUN_0009ef68(uVar9,*puVar8);
      return;
    }
  } while ((int)uVar9 < (int)(uint)DAT_00016cf4);
  DAT_003fa18b = 0x13;
  return;
}

