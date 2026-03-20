/*
 * Program: n42.bin
 * Function: FUN_001a40a0
 * Entry: 001a40a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_001a40a0(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  
  param_1 = param_1 * 5;
  uVar6 = (uint)*(byte *)(param_1 + 0xf2321b);
  if (uVar6 != 0) {
    iVar4 = (int)(uint)*(byte *)(param_1 + 0xf2321a) >> 3;
    uVar3 = (uint)*(byte *)(param_1 + 0xf2321a) + iVar4 * -8;
    bVar1 = *(byte *)(param_1 + 0xf23218);
    _5();
    iVar7 = _DAT_003fae80 + (uint)bVar1 * 0x14;
    puVar5 = (uint *)(iVar7 + iVar4);
    uVar2 = *puVar5;
    if (*(char *)(param_1 + 0xf23219) == '\x02') {
      uVar6 = (1 << (uVar6 & 0x3f)) + -1 << (uVar3 & 0x3f);
      uVar6 = (uVar2 << 0x18 | uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | (uVar2 & 0xff00) << 8) & ~uVar6
              | uVar6 & *param_2 << (uVar3 & 0x3f);
      uVar2 = uVar6 << 0x18 | uVar6 >> 0x18 | uVar6 >> 8 & 0xff00 | (uVar6 & 0xff00) << 8;
    }
    else if (uVar6 == 8) {
      uVar2 = uVar2 & 0xffffff | *param_2 << 0x18;
    }
    else if (uVar6 == 0x10) {
      uVar2 = uVar2 & 0xffff | *param_2 << 0x10;
    }
    else if (uVar6 == 0x20) {
      uVar2 = *param_2;
    }
    *puVar5 = uVar2;
    *(undefined *)(param_2 + 1) = *(undefined *)(iVar7 + 0xf);
    _6();
  }
  return *(undefined *)(param_2 + 1);
}

