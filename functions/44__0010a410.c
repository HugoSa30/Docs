/*
 * Program: n42.bin
 * Function: 44
 * Entry: 0010a410
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _4(int param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  DAT_003f9ac8 = (byte)param_2;
  uVar5 = 0;
  _DAT_003faf14 = param_1;
  if (0 < param_2) {
    do {
      iVar3 = param_1 + uVar5 * 0x14;
      if ((*(byte *)(iVar3 + 0xf) & 0xc) != 0) {
        if ((*(byte *)(iVar3 + 0xf) & 1) == 0) {
          puVar1 = &UNK_003faf4e;
        }
        else {
          puVar1 = &UNK_003faf50;
        }
        *(ushort *)(puVar1 + (uint)*(byte *)(iVar3 + 0xd) * 6) =
             *(ushort *)(puVar1 + (uint)*(byte *)(iVar3 + 0xd) * 6) |
             (ushort)(1 << (*(byte *)(iVar3 + 0xe) & 0x3f));
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while ((int)uVar5 < param_2);
  }
  _5();
  uVar2 = (uint)DAT_00f07e5c;
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      *(ushort *)(*(int *)(uVar5 * 4 + 0xf09940) + 0x22) =
           *(ushort *)(&UNK_003faf4e + uVar5 * 6) | *(ushort *)(&UNK_003faf50 + uVar5 * 6);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < uVar2);
  }
  _6();
  uVar5 = 0;
  if (DAT_003f9ac8 != 0) {
    do {
      iVar4 = uVar5 * 0x14;
      *(undefined *)(_DAT_003faf20 + uVar5) = 0;
      _7(_DAT_003faf14 + iVar4 + 8);
      iVar3 = ((uint)*(byte *)(_DAT_003faf14 + iVar4 + 0xe) +
               (uint)*(byte *)(_DAT_003faf14 + iVar4 + 0xd) * 0x10 & 0xff) * 2;
      (&UNK_003fae84)[iVar3] = *(undefined *)(_DAT_003faf14 + iVar4);
      (&UNK_003fae85)[iVar3] = 2;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < DAT_003f9ac8);
  }
  return;
}

