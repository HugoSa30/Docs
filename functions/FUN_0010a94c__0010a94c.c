/*
 * Program: n42.bin
 * Function: FUN_0010a94c
 * Entry: 0010a94c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a94c(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (DAT_003f9ac8 != 0) {
    do {
      iVar4 = _DAT_003faf14 + uVar6 * 0x14;
      bVar1 = *(byte *)(iVar4 + 0xd);
      bVar2 = *(byte *)(iVar4 + 0xe);
      FUN_001a47d8(iVar4 + 8);
      iVar4 = ((uint)bVar2 + (uint)bVar1 * 0x10 & 0xff) * 2;
      (&UNK_003fae84)[iVar4] = 0xff;
      (&UNK_003fae85)[iVar4] = 0xff;
      *(undefined *)(_DAT_003faf20 + uVar6) = 0;
      bVar3 = *(byte *)(_DAT_003faf14 + uVar6 * 0x14 + 0xf);
      if ((bVar3 & 0xc) != 0) {
        if ((bVar3 & 1) == 0) {
          puVar5 = &UNK_003faf4e;
        }
        else {
          puVar5 = &UNK_003faf50;
        }
        *(ushort *)(puVar5 + (uint)bVar1 * 6) =
             *(ushort *)(puVar5 + (uint)bVar1 * 6) & ~(ushort)(1 << (bVar2 & 0x3f));
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < DAT_003f9ac8);
  }
  return;
}

