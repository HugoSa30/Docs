/*
 * Program: n42.bin
 * Function: FUN_000a4820
 * Entry: 000a4820
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000a4820(void)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint in_MSR;
  
  uVar9 = 0;
  uVar5 = 0;
  uVar6 = 0;
  bVar8 = 0;
  if (DAT_003fa2e6 != '\0') {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa2a2 = _DAT_003fa2e4;
    DAT_003fa260 = 1;
    DAT_003fa2e6 = '\0';
    DAT_003fa25f = 1;
    goto LAB_000a4b5c;
  }
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  DAT_003fa25f = 0;
  if (DAT_003fa5b0 == 0) {
    DAT_003fa5b0 = 1;
  }
  for (uVar3 = (uint)DAT_003fa5b0; (uVar3 & 1) != 1; uVar3 = uVar3 >> 1) {
    uVar9 = uVar9 + 1 & 0xff;
  }
  DAT_003fa5b0 = DAT_003fa5b0 + 1;
  if ((uVar9 != 0) && (*(char *)(uVar9 + 0x17074) == '\0')) {
    uVar9 = 0;
  }
  if (DAT_003fa25b == '\0') {
    uVar9 = 0;
LAB_000a49b8:
    if (DAT_003fa259 != '\0') {
      bVar2 = false;
      bVar7 = 0;
      while( true ) {
        uVar9 = (uint)*(ushort *)(&UNK_003fa218 + (uint)DAT_003fa258 * 2);
        if (uVar9 < 0x80) {
          uVar3 = 1;
          bVar1 = *(byte *)(uVar9 * 5 + 0x1709e);
        }
        else {
          uVar3 = (uint)*(byte *)(uVar9 * 5 + 0x16e30);
          bVar1 = *(byte *)(uVar9 * 5 + 0x16e33);
        }
        if (((bVar7 != bVar1) && (uVar5 != 0)) || (0x1f < (uVar6 & 0xff) + uVar3)) break;
        DAT_003fa259 = DAT_003fa259 + -1;
        if (DAT_003fa259 == '\0') {
          bVar2 = true;
        }
        uVar5 = uVar5 + 1 & 0xff;
        if (uVar5 == 1) {
          bVar8 = DAT_003fa258;
        }
        DAT_003fa258 = DAT_003fa258 + 1 & 0x1f;
        uVar6 = uVar6 + uVar3;
        if ((2 < bVar1) || (bVar7 = bVar1, bVar2)) break;
      }
      uVar9 = 0;
      if (uVar5 != 0) {
        do {
          *(undefined2 *)(&DAT_003fa2a2 + uVar9 * 2) =
               *(undefined2 *)(&UNK_003fa218 + (uint)bVar8 * 2);
          bVar8 = bVar8 + 1 & 0x1f;
          uVar9 = uVar9 + 1 & 0xff;
        } while (uVar9 < uVar5);
      }
      DAT_003fa260 = (byte)uVar5;
      goto LAB_000a4b5c;
    }
  }
  else if (uVar9 == 0) goto LAB_000a49b8;
  uVar5 = 0;
  DAT_003fa260 = *(byte *)(uVar9 + 0x17074);
  if (DAT_003fa260 != 0) {
    iVar4 = *(int *)(uVar9 * 4 + 0x1707c);
    do {
      *(undefined2 *)(&DAT_003fa2a2 + uVar5 * 2) = *(undefined2 *)(iVar4 + uVar5 * 2);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < DAT_003fa260);
  }
LAB_000a4b5c:
  return DAT_003fa260 != 0 || DAT_003fa2e2 != '\0';
}

