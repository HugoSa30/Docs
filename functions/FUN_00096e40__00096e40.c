/*
 * Program: n42.bin
 * Function: FUN_00096e40
 * Entry: 00096e40
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00097250) */
/* WARNING: Removing unreachable block (ram,0x00097238) */
/* WARNING: Removing unreachable block (ram,0x000971b8) */
/* WARNING: Removing unreachable block (ram,0x00097014) */
/* WARNING: Removing unreachable block (ram,0x00096f5c) */
/* WARNING: Removing unreachable block (ram,0x00096fdc) */
/* WARNING: Removing unreachable block (ram,0x00097038) */
/* WARNING: Removing unreachable block (ram,0x000971e0) */
/* WARNING: Removing unreachable block (ram,0x00097200) */
/* WARNING: Removing unreachable block (ram,0x00097220) */
/* WARNING: Removing unreachable block (ram,0x00097260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00096e40(void)

{
  short sVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint in_BAR;
  
  _DAT_002fc018 = 0x80000000;
  _DAT_002fc280 = 0x3216700;
  _DAT_002fc284 = (undefined *)((uint)_DAT_002fc284 & 0xfff0001f | 0x15080);
  FUN_00096c0c();
  FUN_00096d7c();
  _DAT_002fc284 = &UNK_00315081;
  _DAT_002fc200 = 3;
  instructionSynchronize();
  _DAT_00307f80 = 0;
  DAT_003f9e65 = 0;
  _DAT_002fc104 = 0x50;
  _DAT_002fc100 = 0;
  DAT_005b8000 = 0x5aa53cc3;
  _DAT_002fc11c = 0xffff8030;
  _DAT_002fc118 = &DAT_005b8423;
  _DAT_002fc10c = 0xfffc0030;
  _DAT_002fc114 = 0xffe00040;
  uVar6 = 0xe00803;
  _DAT_002fc110 = 0xe00803;
  DAT_005e000c._2_2_ = 0;
  DAT_005e000a = 0;
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x66);
  _DAT_002fc108 = &DAT_005c0823;
  cVar5 = FUN_00096b2c();
  if (cVar5 == '\0') {
    _DAT_002fc114 = 0xfff00640;
    uVar6 = 0xf00803;
  }
  else {
    _DAT_002fc114 = 0xffe00650;
  }
  _DAT_002fc110 = uVar6;
  FUN_00096b68();
  sVar1 = _DAT_003060fe;
  DAT_003f9e64 = (byte)((ushort)_DAT_003060fe >> 0xf);
  FUN_00096df8();
  if (-1 < sVar1) {
    _DAT_002fc280 = _DAT_002fc280 & 0x9fffffff | 0x20000000;
  }
  _DAT_002fc144 = 0x78000000;
  _DAT_002fc140 = 0x70000005;
  _DAT_00306800 = 0;
  uVar2 = DAT_003f9e6a;
  uVar3 = DAT_003f9e6b;
  if (((uint)((in_BAR & 7) == 0) == (in_BAR & 7)) &&
     ((undefined *)(_DAT_002fc808 & 0x7f0000) == &UNK_005a0000)) {
    _DAT_00306100 = 0x10;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x66);
    _DAT_00306102 = 0;
    _DAT_002fc02c = _DAT_002fc02c & 0xf7ffffff;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x66);
    DAT_003f9e68 = (_DAT_002fc028 & 0x8000000) == 0;
    DAT_003f9e69 = (_DAT_002fc028 & 0x2000000) == 0;
    DAT_003f9e6a = 0;
    DAT_003f9e6b = 1;
    if ((bool)DAT_003f9e68) {
      if ((bool)DAT_003f9e69) {
        _DAT_003f9e66 = 2;
        DAT_003f9e6a = 0;
        DAT_003f9e6b = 1;
      }
      else {
        _DAT_003f9e66 = 1;
      }
    }
    else {
      uVar2 = 0;
      uVar3 = 1;
      if ((bool)DAT_003f9e69) goto LAB_00097270;
      _DAT_003f9e66 = 1;
    }
  }
  else {
LAB_00097270:
    DAT_003f9e6b = uVar3;
    DAT_003f9e6a = uVar2;
    _DAT_003f9e66 = 0;
  }
  if (_DAT_003f9e66 == 1) {
    puVar7 = &DAT_00640c00;
LAB_000972ec:
    _DAT_002fc000 = (uint)(DAT_003f9e64 != 1) << 0xd | (uint)puVar7;
  }
  else {
    if (_DAT_003f9e66 == 2) {
      puVar7 = (undefined *)0x400c00;
    }
    else {
      if (_DAT_003f9e66 != 3) {
        puVar7 = (undefined *)0x420c00;
        goto LAB_000972ec;
      }
      _DAT_00306800 = 3;
      puVar7 = &DAT_00600c00;
    }
    _DAT_002fc000 = (uint)(DAT_003f9e64 != 1) << 0xd | (uint)puVar7;
  }
  _DAT_002fc03c = 0x2000000;
  FUN_00093bf4(6);
  return;
}

