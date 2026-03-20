/*
 * Program: n42.bin
 * Function: FUN_001a3afc
 * Entry: 001a3afc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a3afc(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined uStack_20;
  undefined local_1f;
  
  FUN_001a4774(0xff);
  uVar8 = 0;
  DAT_003faf45 = 0;
  DAT_003faf46 = 0;
  DAT_003faf47 = 0;
  DAT_003faf48 = 0;
  DAT_003faf49 = 0;
  DAT_003faf4a = 0;
  if (DAT_003fae70 != 0) {
    do {
      iVar5 = _DAT_003faf10 + uVar8 * 0x18;
      bVar1 = *(byte *)(iVar5 + 0x11);
      bVar2 = *(byte *)(iVar5 + 0x12);
      iVar3 = ((uint)bVar2 + (uint)bVar1 * 0x10 & 0xff) * 2;
      (&UNK_003fae84)[iVar3] = 0xff;
      (&UNK_003fae85)[iVar3] = 0xff;
      if ((*(byte *)(iVar5 + 0x13) & 0xc) != 0) {
        if ((*(byte *)(iVar5 + 0x13) & 1) == 0) {
          puVar6 = &UNK_003faf4e;
        }
        else {
          puVar6 = &UNK_003faf50;
        }
        *(ushort *)(puVar6 + (uint)bVar1 * 6) =
             *(ushort *)(puVar6 + (uint)bVar1 * 6) & ~(ushort)(1 << (bVar2 & 0x3f));
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < DAT_003fae70);
  }
  _DAT_003faf10 = *(int *)(param_1 * 8 + 0xf232f0);
  DAT_003fae70 = *(byte *)(param_1 * 8 + 0xf232f4);
  iVar3 = FUN_001a442c(&UNK_003faf24,&uStack_20,0,1);
  if (iVar3 == 1) {
    DAT_003faf45 = local_1f;
  }
  cVar4 = FUN_001a442c(&UNK_003faf2c,&uStack_20,0,0);
  if (cVar4 != '\0') {
    DAT_003faf46 = local_1f;
  }
  cVar4 = FUN_001a442c(&UNK_003faf38,&uStack_20,0,0x11);
  if (cVar4 != '\0') {
    DAT_003faf47 = local_1f;
  }
  cVar4 = FUN_001a442c(&UNK_003faf3c,&uStack_20,0,0x10);
  if (cVar4 != '\0') {
    DAT_003faf48 = local_1f;
  }
  cVar4 = FUN_001a442c(&UNK_003faf40,&uStack_20,0,0x21);
  if (cVar4 != '\0') {
    DAT_003faf49 = local_1f;
  }
  cVar4 = FUN_001a442c(&UNK_003faf44,&uStack_20,0,0x20);
  iVar3 = _DAT_003faf10;
  if (cVar4 != '\0') {
    DAT_003faf4a = local_1f;
  }
  uVar7 = (uint)DAT_003fae70;
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      iVar5 = iVar3 + uVar8 * 0x18;
      if ((*(byte *)(iVar5 + 0x13) & 0xc) != 0) {
        if ((*(byte *)(iVar5 + 0x13) & 1) == 0) {
          puVar6 = &UNK_003faf4e;
        }
        else {
          puVar6 = &UNK_003faf50;
        }
        *(ushort *)(puVar6 + (uint)*(byte *)(iVar5 + 0x11) * 6) =
             *(ushort *)(puVar6 + (uint)*(byte *)(iVar5 + 0x11) * 6) |
             (ushort)(1 << (*(byte *)(iVar5 + 0x12) & 0x3f));
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar7);
  }
  _DAT_003faec4 = 0;
  _5();
  uVar7 = (uint)DAT_00f07e5c;
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      *(ushort *)(*(int *)(uVar8 * 4 + 0xf09940) + 0x22) =
           *(ushort *)(&UNK_003faf4e + uVar8 * 6) | *(ushort *)(&UNK_003faf50 + uVar8 * 6);
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar7);
  }
  _6();
  uVar8 = 0;
  if (DAT_003fae70 != 0) {
    do {
      iVar3 = uVar8 * 0x14;
      iVar5 = _DAT_003fae80 + iVar3;
      *(undefined4 *)(iVar5 + 4) = 0xffffffff;
      *(undefined4 *)(_DAT_003fae80 + iVar3) = 0xffffffff;
      *(undefined *)(iVar5 + 0xf) = 0;
      iVar5 = uVar8 * 0x18;
      *(undefined *)(_DAT_003fae80 + iVar3 + 0xf) =
           (&UNK_003fae78)[*(byte *)(_DAT_003faf10 + iVar5 + 0x11)];
      *(undefined *)(_DAT_003fae80 + iVar3 + 0xd) = 1;
      *(undefined *)(_DAT_003fae80 + iVar3 + 0xb) = 0;
      func_0xff20817c(uVar8);
      _7(_DAT_003faf10 + iVar5 + 0xc);
      iVar3 = ((uint)*(byte *)(_DAT_003faf10 + iVar5 + 0x12) +
               (uint)*(byte *)(_DAT_003faf10 + iVar5 + 0x11) * 0x10 & 0xff) * 2;
      (&UNK_003fae84)[iVar3] = (char)uVar8;
      (&UNK_003fae85)[iVar3] = 1;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < DAT_003fae70);
  }
  return;
}

